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

ll cut(auto &data, ll l, ll r, ll level, ll &limit)
{
    if((level>limit) || (r-l+1<3))    return 0;
    ll pre[r], suf[r], tmp=0;
    pre[l] = 0;
    f3(i, l+1, r)
    {
        tmp+=data[i-1];
        pre[i] = pre[i-1] + tmp;
    }
    suf[r] = 0;
    tmp = 0;
    f3_(i, r-1, l)
    {
        tmp+=data[i+1];
        suf[i] = suf[i+1] + tmp;
    }
    ll minDif = abs(pre[l+1] - suf[l+1]), minIdx = l+1;
    f3(i, l+2, r)
    {
        if(abs(pre[i]-suf[i])<minDif)
        {
            minDif = abs(pre[i]-suf[i]);
            minIdx = i;
        }
    }
    return data[minIdx] + cut(data, l, minIdx-1, level+1, limit) + cut(data, minIdx+1, r, level+1, limit);
}

int main()    //    https://zerojudge.tw/ShowProblem?problemid=f638
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    vector <ll> data(n);
    f2(i, n)    cin >> data[i];
    cout << cut(data, 0, n-1, 1, m);
}
