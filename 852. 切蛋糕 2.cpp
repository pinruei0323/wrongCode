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

struct data
{
    vector <ll> cake;
    vector <ll> pre;
};


int main()    //    https://zerojudge.tw/ShowProblem?problemid=f638
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    data a, b;
    data *aa=&a, *bb=&b;
    a.cake.resize(n);
    a.pre.resize(n);
    b.cake.resize(n);
    b.pre.resize(n);
    f2(i, n)
    {
        cin >> a.cake[i];
        a.pre[i] = (i==0?0:a.pre[i-1]) + a.cake[i];
    }
    f2(i, n)
    {
        cin >> b.cake[i];
        b.pre[i] = (i==0?0:b.pre[i-1]) + b.cake[i];
    }
    ll tmpL=-1, tmpR=-1, maxSum=a.pre[n-1];
    f2(t, 2)
    {
        f2(l, n)
        {
            f3(r, l+1, n)
            {
                if((*bb).pre[n-1]+(((*aa).pre[r]-(l==0?0:(*aa).pre[l-1]))-((*bb).pre[r]-(l==0?0:(*bb).pre[l-1]))) > maxSum)
                {
                    maxSum = (*bb).pre[n-1]+(((*aa).pre[r]-(l==0?0:(*aa).pre[l-1]))-((*bb).pre[r]-(l==0?0:(*bb).pre[l-1])));
                    tmpL = l+1;
                    tmpR = r+1;
                }
            }
        }
        swap(aa, bb);
    }
    cout << maxSum << '\n' << tmpL << '\n' <<  tmpR;
    return 0;
}
