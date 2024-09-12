#include<bits/stdc++.h>
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

ll binarySearch(auto data, ll n, ll x)
{
    ll l=0, r=n-1;
    if(x<data[l] || x>data[r])    return -1;
    do
    {
        ll tmp = ceil((r+l)/2.0);
        if(x<data[tmp])
            r = tmp-1;
        elif(x>data[tmp])
            l = tmp+1;
        else
            return tmp;
        if(x==data[l])
            return l;
        if(x==data[r])
            return r;
    }
    while(r-l>1);
    return -1;
}

int main()    //    https://zerojudge.tw/ShowProblem?problemid=c231
{
    cout << "輸入格式:\n陣列長度  陣列內容  欲搜尋值\n回傳idx, 若不存在, 回傳-1\n";
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, x;
    cin >> n;
    vector <ll> data(n);
    f2(i, n)    cin >> data[i];
    cin >> x;
    cout << binarySearch(data, n, x);
    return 0;
}