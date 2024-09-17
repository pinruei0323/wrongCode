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
    ll a, b, c, tmp = 0;
    cin >> a >> b >> c;
    ll my = a, mx = b;
    vector <vector <ll>> dataA(max(a, b), vector <ll> (max(a, b)));
    vector <vector <ll>> dataB(max(a, b), vector <ll> (max(a, b)));
    bitset <10000> move;
    f2(i, a)    f2(j, b)    cin >> dataA[i][j];
    f2(i, c)
    {
        int dd;
        cin >> dd;
        if(dd) move[i] = 1;
    }
    for(int i=c-1; i>=0; i--)
    {
        tmp++;
        if(tmp%2)
        {
            auto *nowPtr = &dataA;
            auto *nextPtr = &dataB;
        }
        if(data[i]==1)    f2(j, my)    f2(k, mx)    &nextPtr[j][k] = &nowPtr[my-j-1][k];
        else
        {
            
        }
    }
    return 0;
}