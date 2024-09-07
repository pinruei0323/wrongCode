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
    vector <vector <bool>> data(n, vector <bool> (m));//1表示為炸彈or炸彈感應區
    f2(i, c)
    {
        ll a, b;
        cin >> a >> b;
        a--;//這兩行讓a, b都變成索引值
        b--;
        data[a][b] = 1;
        if(a-1>=0)    data[a-1][b] = 1;//line34-41 : 判斷感應區是否越界
        if(a+1<n)    data[a+1][b] = 1;
        if(b-1>=0)    data[a][b-1] = 1;
        if(b+1<m)    data[a][b+1] = 1;
        if(a-1>=0 && b-1>=0)    data[a-1][b-1] = 1;
        if(a-1>=0 && b+1<m)    data[a-1][b+1] = 1;
        if(a+1<n && b+1<m)    data[a+1][b+1] = 1;
        if(a+1<n && b-1>=0)    data[a+1][b-1] = 1;
    }
    f2(i, n)
    {
        f2(j, m)
        {
            if(data[i][j])
            {
                ans++;//ans為聯通塊數量
                queue <pair<ll, ll>> que;//bfs
                que.push({i, j});
                data[i][j] = 0;
                while(!que.empty())
                {
                    ll a=que.front().first, b=que.front().second;
                    que.pop();
                    if(a-1>=0 && data[a-1][b])//上
                    {
                        data[a-1][b] = 0;
                        que.push({a-1, b});
                    }
                    if(a+1<n && data[a+1][b])//下
                    {
                        data[a+1][b] = 0;
                        que.push({a+1, b});
                    }
                    if(b-1>=0 && data[a][b-1])//左
                    {
                        data[a][b-1] = 0;
                        que.push({a, b-1});
                    }
                    if(b+1<m && data[a][b+1])//右
                    {
                        data[a][b+1] = 0;
                        que.push({a, b+1});
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}
