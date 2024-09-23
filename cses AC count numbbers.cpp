#include<bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/stack:200000000")
#define f2(i, m) for(long long i=0; i<m; i++)
#define f3(i, n, m) for(long long i=n; i<m; i++)
#define ll long long
#define pb push_back
#define pob pop_back
#define len length()
#define elif else if
#define mod 1000000007
#define debug
/*
#ifdef debug
#endif
#ifndef debug
#endif
*/
using namespace std;

ll dp[20][20][2][2];

ll memSearch(string &s, int pos, int pre, bool limit, bool lead)
{
    if(dp[pos][pre][limit][lead]+1)
        return dp[pos][pre][limit][lead];
    if(pos == s.len)
        return dp[pos][pre][limit][lead] = 1;
    ll sum = 0;
    f2(i, (limit?s[pos]-'0'+1:10))
    {
        if((i==pre && i) || (!i && !pre && !lead))
            continue;
        sum+=memSearch(s, pos+1, i, limit&(s[pos]-'0'==i), lead&(!i));
    }
    return dp[pos][pre][limit][lead] = sum;
}

ll findAns(string s)
{
    memset(dp, -1, sizeof(dp));
    if(s == "-1")
        return 0;
    return memSearch(s, 0, 0, 1, 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string l, r;
    cin >> l >> r;
    if(l == "0")
        l = "-1";
    else
    {
        for(int i=l.len-1; i>=0; i--)
        {
            if(l[i]=='0')
                l[i] = '9';
            else
            {
                l[i]--;
                break;
            }
        }
    }
    cout << findAns(r) - findAns(l);
    #ifndef debug
    cout << '\n' << findAns(r) << ' ' << findAns(l);
    #endif
    return 0;
}