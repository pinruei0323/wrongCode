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

int main()    //    https://zerojudge.tw/ShowProblem?problemid=f638
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector <ll> a(n);
    vector <ll> b(n);
    ll preA[n], preB[n], sumA=0, sumB=0, tmpL=0, tmpR=0, tmpSum=0;
    f2(i, n)
    {
        cin >> a[i];
        preA[i] = (i==0?0:preA[i-1]) + a[i];
        sumA+=a[i];
    }
    f2(i, n)    
    {
        cin >> b[i];
        preB[i] = (i==0?0:preB[i-1]) + b[i];
        sumB+=b[i];
    }
    f2(i, n)
    {
        f3(j, i+1, n)
        {
            if(sumB>sumA)
            {
                
            }
        }
    }
    return 0;
}
