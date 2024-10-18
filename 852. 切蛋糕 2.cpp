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

struct seg
{
    ll first, startIdx;
    bool operater<(const seg &other)const
    {
        if(this->first != other.first)
            return this->startIdx > other.startIdx;
        else
            return this->first < other.first;
    }
}

int main()    //    https://oj.ntucpc.org/contests/18/problems/852
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<seg> datA;
    priority_queue<seg> datB;
    ll n, tmp;
    cin >> n;
    vector<ll> preA(n+1);
    vector<ll> preB(n+1);
    f3(i, 1, n+1)
    {
        cin >> tmp;
        preA[i] = preA[i-1] + tmp;
    }
    f3(i, 1, n+1)
    {
        cin >> tmp;
        preB[i] = preB[i-1] + tmp;
    }
    ll maxL=-1, maxR=-1, maxV = preA[n]>preB[n]?preA[n]:preB[n];
    f2(i, n+1)
    return 0;
}
