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

ll fact(ll n, vector<ll> &f)
{
    if(f[n])
        return f[n];
    if(f.capacity()-1 < n)
        f.resize(n+1);
    f[n] = fact(n-1, f)*n;
    return f[n];
}

ll cnk(ll n, ll k, map<pair<ll, ll>, ll> &nk, vector<ll> &f)
{
    if(nk.find({n, k})!=end(nk))
        return nk[{n, k}];
    ll kk = fact(n, f)/fact(k, f)/fact(n-k, f);
    nk.insert({{n, k}, kk});
    return kk;
}

int main()    //    https://oj.ntucpc.org/contests/18/problems/852
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, a, b, c;;
    cin >> n >> m;
    map<ll, ll> dat;
    vector<ll> f;
    map<pair<ll, ll>, ll> nk;

    f2(i, m)
    {
        ll x;
        cin >> x;
        if(x==1)
        {
            cin >> a >> b >> c;
            auto it = dat.find(a);
            if(it == end(dat))
                dat.insert({a, c});
            else
                it->second+=c;
            it = dat.find(b+1);
            if(it == end(dat))
                dat.insert({b+1, -1*c});
            else
                it->second-=c;
        }
        else
        {

        }
    }
    return 0;
}
