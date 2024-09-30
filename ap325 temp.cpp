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

ll catching(string s)
{
    if(s == "f")
    {
        cin >> s;
        return 2*catching(s)-3;
    }
    elif(s == "g")
    {
        ll tmp = 0;
        cin >> s;
        tmp+=2*catching(s);
        cin >> s;
        tmp+=catching(s)-7;
        return tmp;
    }
    elif(s == "h")
    {
        ll tmp = 0;
        cin >> s;
        tmp+=3*catching(s);
        cin >> s;
        tmp-=2*catching(s);
        cin >> s;
        tmp+=catching(s);
        return tmp;
    }
    else
        return stol(s);
}

int main()    //    https://zerojudge.tw/ShowProblem?problemid=c231
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    cout << catching(s);
    return 0;
}
