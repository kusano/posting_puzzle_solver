#include <cstdio>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <chrono>

using namespace std;

int gcd(int a, int b)
{
    while (a > 0)
    {
        int t = a;
        a = b%a;
        b = t;
    }
    return b;
}

void solve(int stage, bool rev)
{
    printf("stage: %d\n", stage);

    string Pieces[7][3][2] =
    {
        {},
        {{"a", "bb"}, {"aaa", "b"}, {"aa", "aa"}},
        {{"a", "abbb"}, {"a", "ba"}, {"aba", "b"}},
        {{"abb", "b"}, {"b", "baa"}, {"a", "aa"}},
        {{"abb", "b"}, {"b", "baa"}, {"a", "a"}},
        {{"baab", "a"}, {"a", "bba"}, {"ab", "b"}},
        {{"ab", "a"}, {"b", "aab"}, {"bba", "b"}},
    };

    string pieces[3][2];
    for (int p=0; p<3; p++)
        for (int ub=0; ub<2; ub++)
            pieces[p][ub] = Pieces[stage][p][ub];

    if (rev)
        for (int p=0; p<3; p++)
            for (int ub=0; ub<2; ub++)
                reverse(pieces[p][ub].begin(), pieces[p][ub].end());

    // 答えに含まれる各ピースの個数の比率を求める。
    int ua[3] = {};
    int ub[3] = {};
    int ba[3] = {};
    int bb[3] = {};
    for (int p=0; p<3; p++)
    {
        for (int c: pieces[p][0])
            (c=='a' ? ua[p] : ub[p])++;
        for (int c: pieces[p][1])
            (c=='a' ? ba[p] : bb[p])++;
    }

    int numRatio[3] =
    {
        (ua[1]-bb[1])*(ub[2]-ba[2])-(ub[1]-ba[1])*(ua[2]-bb[2]),
        (ua[2]-bb[2])*(ub[0]-ba[0])-(ub[2]-ba[2])*(ua[0]-bb[0]),
        (ua[0]-bb[0])*(ub[1]-ba[1])-(ub[0]-ba[0])*(ua[1]-bb[1]),
    };

    bool negative = false;
    for (int n: numRatio)
        if (n<0)
            negative = true;
    if (negative)
        for (int &n: numRatio)
            n = -n;
    int g = gcd(numRatio[0], gcd(numRatio[1], numRatio[2]));
    for (int &n: numRatio)
        n /= g;

    printf("numRatio: %d:%d:%d\n", numRatio[0], numRatio[1], numRatio[2]);

    int numRatioSum = 0;
    for (int n: numRatio)
        numRatioSum += n;

    for (int max_depth=numRatioSum; ; max_depth+=numRatioSum)
    {
        vector<int> answer;
        string lanes[2];
        int counts[3] = {};
        long long nodes = 0;

        function<bool (int)> f = [&](int depth) -> bool
        {
            nodes++;

            if (lanes[0].size()>0 && lanes[0].size()==lanes[1].size())
                return true;

            if (depth>=max_depth)
                return false;

            for (int p=0; p<3; p++)
            {
                int prev_len = (int)min(lanes[0].size(), lanes[1].size());

                answer.push_back(p);
                lanes[0] += pieces[p][0];
                lanes[1] += pieces[p][1];
                counts[p]++;

                bool ok = true;

                int len = (int)min(lanes[0].size(), lanes[1].size());
                for (int i=prev_len; i<len; i++)
                    if (lanes[0][i]==lanes[1][i])
                        ok = false;

                if (ok && counts[p]>max_depth*numRatio[p]/numRatioSum)
                    ok = false;

                if (ok && stage==5 && rev)
                {
                    // baab  a    ba
                    // a     abb  b

                    // 上段にbbが残っていれば、ピース0を使わないといけない。
                    int c = counts[0];
                    for (int i=len; i+1<(int)lanes[0].size(); i++)
                        if (lanes[0][i]=='b' && lanes[0][i+1]=='b')
                            c++;
                    // 上段にbabが残っていれば、ピース0を使わないといけない。
                    // さらに、その後上段にbbが出てくるので、最低2個は使うことになる。
                    for (int i=len; i+2<(int)lanes[0].size(); i++)
                        if (lanes[0][i]=='b' && lanes[0][i+1]=='a' && lanes[0][i+2]=='b')
                            c++;
                    if (c>max_depth*numRatio[0]/numRatioSum)
                        ok = false;

                    // 上段が長すぎたら枝刈り。
                    if ((int)lanes[0].size()>len+64)
                        ok = false;
                }

                if (ok)
                    if (f(depth+1))
                        return true;

                answer.pop_back();
                lanes[0].resize(lanes[0].size()-pieces[p][0].size());
                lanes[1].resize(lanes[1].size()-pieces[p][1].size());
                counts[p]--;
            }

            return false;
        };

        chrono::system_clock::time_point start = chrono::system_clock::now();

        bool solved = f(0);

        chrono::system_clock::time_point end = chrono::system_clock::now();
        double time = chrono::duration_cast<chrono::nanoseconds>(end-start).count()*1e-9;

        printf("max_depth=%4d, nodes=%12lld, time=%10.3f\n", max_depth, nodes, time);

        if (solved)
        {
            if (rev)
                reverse(answer.begin(), answer.end());

            printf("answer: ");
            for (int a: answer)
                printf("%d", a);
            printf("\n\n");
            break;
        }
    }
}

int main()
{
    solve(1, false);
    solve(2, false);
    solve(3, false);
    solve(4, false);
    solve(5, true);
    solve(6, true);
}
