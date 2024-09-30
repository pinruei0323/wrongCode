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

void cut(auto l, auto r, ll &ans)
{
    ll mid = (*r+*l)/2;
    if(r-l>2)
    {
        auto tmpR = upper_bound(l+1, r-1, mid), tmpL = tmpR-1;
        cut(l, (mid-*tmpL<*tmpR-mid?tmpL:tmpR), ans);
        cut((mid-*tmpL<*tmpR-mid?tmpL:tmpR), r, ans);
        ans+=(*r-*l);
    }
    elif(r-l==2)
        ans+=(*r-*l);
}

int main()    //    https://zerojudge.tw/ShowProblem?problemid=c231
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    ll arr[n+2], ans=0;
    arr[0] = 0;
    arr[n+1] = m;
    f3(i, 1, n+1)    cin >> arr[i];
    cut(arr+0, &arr[n+1], ans);
    cout << ans;
    return 0;
}
