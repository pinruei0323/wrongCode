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

typedef struct node
{
    ll row, col, step, maxHigh;
}*nodePtr;

int main()    //    https://oj.ntucpc.org/contests/18/problems/852
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll nn;
    cin >> nn;
    vector<vector<ll>> dat(nn+2, vector<ll> (nn+2));
    f3(i, 1, nn+1)    f3(j, 1, nn+1)    cin >> dat[i][j];
    ll l=-1, r=1e6, m;
    pair<ll, ll> p = {1e7, 1e7};
    while(l+1!=r)
    {
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

typedef struct node
{
    ll row, col, step, maxHigh;
}*nodePtr;

int main()    //    https://oj.ntucpc.org/contests/18/problems/852
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll nn;
    cin >> nn;
    vector<vector<ll>> dat(nn+2, vector<ll> (nn+2));
    f3(i, 1, nn+1)    f3(j, 1, nn+1)    cin >> dat[i][j];
    ll l=-1, r=1e6, m;
    pair<ll, ll> p = {1e7, 1e7};
    while(l+1!=r)
    {
        bool ok = 0;
        m = (l+r)/2;
        que.push({1, 1, 0, 0});
        vector<vector<ll>> visited(nn+2, vector<ll> (nn+2, 1e7));
        queue<node> que;
        visited[1][1] = 0;
        while(!que.empty())
        {
            nodePtr now = &que.front();
            ll tmpData = dat[now->row][now->col], diff;
            
            if(now->row==nn && now->col==nn)
            {
                p = min(p, {now->maxHigh, now->step});
                ok = 1;
                break;
            }
            

            diff = max(now->maxHigh, abs(dat[now->row+1][now->col]-tmpData));
            if(dat[now->row+1][now->col]!=0 && diff<visited[now->row+1][now->col] && diff<=m)
            {
                que.push({now->row+1, now->col, now->step+1, diff});
                visited[now->row+1][now->col] = diff;
            }

            diff = max(now->maxHigh, abs(dat[now->row-1][now->col]-tmpData));
            if(dat[now->row-1][now->col]!=0 && diff<visited[now->row-1][now->col] && diff<=m)
            {
                que.push({now->row-1, now->col, now->step+1, diff});
                visited[now->row-1][now->col] = diff;
            }

            diff = max(now->maxHigh, abs(dat[now->row][now->col+1]-tmpData));
            if(dat[now->row][now->col+1]!=0 && diff<visited[now->row][now->col+1] && diff<=m)
            {
                que.push({now->row, now->col+1, now->step+1, diff});
                visited[now->row][now->col+1] = diff;
            }

            diff = max(now->maxHigh, abs(dat[now->row][now->col-1]-tmpData));
            if(dat[now->row][now->col-1]!=0 && diff<visited[now->row][now->col-1] && diff<=m)
            {
                que.push({now->row, now->col-1, now->step+1, diff});
                visited[now->row][now->col-1] = diff;
            }
            que.pop();
        }
        if(ok)
            r = m;
        else
            l = m+1;
    }
    cout << p.first << '\n' << p.second;
    return 0;
}
        bool ok = 0;
        queue<node> que;
        m = (l+r)/2;
        que.push({1, 1, 0, 0});
        vector<vector<ll>> visited(nn+2, vector<ll> (nn+2, 1e7));
        visited[1][1] = 0;
        while(!que.empty())
        {
            nodePtr now = &que.front();
            ll tmpData = dat[now->row][now->col], diff;
            
            if(now->row==nn && now->col==nn)
            {
                p = min(p, {now->maxHigh, now->step});
                ok = 1;
                break;
            }
            

            diff = max(now->maxHigh, abs(dat[now->row+1][now->col]-tmpData));
            if(dat[now->row+1][now->col]!=0 && diff<visited[now->row+1][now->col] && diff<=m)
            {
                que.push({now->row+1, now->col, now->step+1, diff});
                visited[now->row+1][now->col] = diff;
            }

            diff = max(now->maxHigh, abs(dat[now->row-1][now->col]-tmpData));
            if(dat[now->row-1][now->col]!=0 && diff<visited[now->row-1][now->col] && diff<=m)
            {
                que.push({now->row-1, now->col, now->step+1, diff});
                visited[now->row-1][now->col] = diff;
            }

            diff = max(now->maxHigh, abs(dat[now->row][now->col+1]-tmpData));
            if(dat[now->row][now->col+1]!=0 && diff<visited[now->row][now->col+1] && diff<=m)
            {
                que.push({now->row, now->col+1, now->step+1, diff});
                visited[now->row][now->col+1] = diff;
            }

            diff = max(now->maxHigh, abs(dat[now->row][now->col-1]-tmpData));
            if(dat[now->row][now->col-1]!=0 && diff<visited[now->row][now->col-1] && diff<=m)
            {
                que.push({now->row, now->col-1, now->step+1, diff});
                visited[now->row][now->col-1] = diff;
            }
            que.pop();
        }
        if(ok)
            r = m;
        else
            l = m+1;
    }
    cout << p.first << '\n' << p.second;
    return 0;
}
