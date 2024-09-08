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
        data[a][b] = 1;
    }
    f2(i, n)
    {
        f2(j, m)
        {
            if(!data[i][j])    continue;
            ans++;
            queue <pair <ll, ll>> que;
            que.push({i, j});
            while(!que.empty())
            {
                ll a=que.front().first, b=que.front().second;
                for(ll k=max((ll)0, a-2); k<min(n, a+3); k++)
                {
                    for(ll l=max((ll)0, b-2); l<min(m, b+3); l++)
                    {
                        if(data[k][l])
                        {
                            data[k][l] = 0;
                            que.push({k, l});
                        }
                    }
                }
                que.pop();
            }
        }
    }
    cout << ans;
    return 0;
}