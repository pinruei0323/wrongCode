#include<bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/stack:200000000")
#define f2(i, m) for(long long i=0; i<m; i++)
#define f3(i, n, m) for(long long i=n; i<m; i++)
#define f2_(i, m) for(long long i=m; i>-1; i--)
#define f3_(i, n, m) for(long long i=n; i>m; i--)
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

int main()    //    https://oj.ntucpc.org/contests/18/problems/852
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    while(cin >> n)
    {
        ll s=0;
        for(int i=1, i<n+1; i++)
        {
            ll k = i;
            while(k%5==0)
            {
                k/=5;
                s++;
            }
        }
        cout << s << '\n';
    }
    return 0;
}
