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

int main()    //    https://zerojudge.tw/ShowProblem?problemid=c231
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, ans=0;
    cin >> n >> m;
    bitset <10001> data;
    f2(i, m)
    {
        ll a,  b;
        cin >> a >> b;
        a--;
        b--;
        data[a] = (data[a]?0:1);
        data[b] = (data[b]?0:1);
    }
    f2(i, n)
    {
        if(data[i])  ans++;
        if(ans>2)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}