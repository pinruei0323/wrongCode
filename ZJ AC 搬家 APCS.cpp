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

int main()    //    https://zerojudge.tw/ShowProblem?problemid=m372
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, ans, maxx=0;
    string s1 = "XILJ",
           s2 = "XI7F",
           s3 = "XH7J",
           s4 = "XHLF";
    cin >> n >> m;
    vector <string> data(n);
    vector <vector <bool>> visited(n, vector <bool> (m));
    f2(i, n)    cin >> data[i];
    f2(i, n)
    {
        f2(j, m)
        {
            if(visited[i][j] || data[i][j]=='0')
            {
                visited[i][j] = 0;
                continue;
            }
            ans = 0;
            queue <pair <ll, ll>> que;
            que.push({i, j});
            while(!que.empty())
            {
                ll a = que.front().first, b = que.front().second;
                if(a-1>=0 && !visited[a-1][b] && (s1.find(data[a][b])+1) && (s2.find(data[a-1][b])+1))
                {
                    que.push({a-1, b});
                    visited[a-1][b] = 1;
                }
                if(a+1<n && !visited[a+1][b] && (s2.find(data[a][b])+1) && (s1.find(data[a+1][b])+1))
                {
                    que.push({a+1, b});
                    visited[a+1][b] = 1;
                }
                if(b-1>=0 && !visited[a][b-1] && (s3.find(data[a][b])+1) && (s4.find(data[a][b-1])+1))
                {
                    que.push({a, b-1});
                    visited[a][b-1] = 1;
                }
                if(b+1<m && !visited[a][b+1] && (s4.find(data[a][b])+1) && (s3.find(data[a][b+1])+1))
                {
                    que.push({a, b+1});
                    visited[a][b+1] = 1;
                }
                visited[a][b] = 1;
                que.pop();
                ans++;
            }
            maxx = max(maxx, ans);
        }
    }
    cout << maxx;
    return 0;
}