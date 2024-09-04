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

void write(ll a, ll b, auto &data, ll &n, ll &m)
{
    if(data[a][b]>1)
    {
        if(a-1>=0 && data[a-1][b] && data[a][b]-1>data[a-1][b])
        {
            data[a-1][b] = data[a][b]-1;
            write(a-1, b, data, n, m);
        }
        if(b-1>=0 && data[a][b-1] && data[a][b]-1>data[a][b-1])
        {
            data[a][b-1] = data[a][b]-1;
            write(a, b-1, data, n, m);
        }
        if(a+1<n && data[a+1][b] && data[a][b]-1>data[a+1][b])
        {
            data[a+1][b] = data[a][b]-1;
            write(a+1, b, data, n, m);
        }
        if(b+1<m && data[a][b+1] && data[a][b]-1>data[a][b+1])
        {
            data[a][b+1] = data[a][b]-1;
            write(a, b+1, data, n, m);
        }
    }
}

int main()    //    https://zerojudge.tw/ShowProblem?problemid=c520
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, ts, ans=0, a, b;
    cin >> n >> m;
    vector <vector <int>> data(n, vector <int> (m));
    f2(i, n)
    {
        string s;
        cin >> s;
        f2(j, m)
            if(s[j]=='.')    data[i][j] = -1;
    }
    cin >> ts;
    for(ll i=ts; i>0; i--)
    {
        cin >> a >> b;
        a--;
        b--;
        f2(i, n)    f2(j, m)    if(data[i][j]>0)    data[i][j]++;
        if(data[a][b]==-1)    data[a][b] = 1;
        f2(i, n)    f2(j, m)    if(data[i][j]>0)    write(i, j, data, n, m);
        f2(i, n)    f2(j, m)    if(data[i][j]>0)    ans++;
        cout << ans << '\n';
        ans = 0;
    }
    return 0;
}
