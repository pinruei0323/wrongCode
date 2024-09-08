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
//    https://tioj.ck.tp.edu.tw/problems/1420
int main()    //    https://zerojudge.tw/ShowProblem?problemid=c231
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, c, ans=0;
    cin >> n >> m >> c;
    vector <vector <bool>> data(n, vector <bool> (m));
    f2(i, c)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        for(ll j=max(0, a-2); j<min(n, a+3); j++)
        {
            bool ok = 0;
            for(ll k=max(0, b-2); k<min(m, b+3); k++)
            {
                if(data[j][k])
                {
                    ok = 1;
                    break;
                }
            }
            if(ok)    break;
        }
        if(!ok)    ans++;
        data[a][b] = 1;
    }
    cout << ans;
    return 0;
}
