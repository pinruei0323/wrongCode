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

void cut(auto &l, auto &r, ll &ans)
{
    auto L=l++, R=r--;
    if(l == R)    break;
    ans+=*R-*L;
    ll *ptrA=upper_bound(l, r, (*l+*r)/2), *ptrB=ptrA--;
    bool aa = (ptrA!=l && (*l+*r)/2-*ptrA <= *ptrB-(*l+*r)/2)
    
    cut(L, (aa?ptrA:ptrB), ans);
    cut((aa?ptrA:ptrB), R);
}

int main()    //    https://zerojudge.tw/ShowProblem?problemid=c231
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, ans=0;
    cin >> n >> m;
    vector <ll> data(n+2);
    f3(i, 1, n+1)
        cin >> data[i];
    data[n+1] = m;
    cut(begin(data), end(data), ans);
    cout << ans;
    return 0;
}