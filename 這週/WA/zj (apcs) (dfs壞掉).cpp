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
/*dfs參數                                                                          實際答案
         算到的索引值 nm是邊界       如果1=>這就是該連通塊的地1項             暫存答案             下一個被選到的如果有在s中,代表下一個元素也是此聯通塊的元素*/
void dfs(ll a, ll b, ll &n, ll &m, bool first, auto &data, auto &visited, ll &ans, ll &maxAns, string s)
{
    if(a>=0 && b>=0 && a<n && b<m && !visited[a][b] && (s.find(data[a][b])+1))//判斷是否已計過數, 是否超出邊界, 是否存在於S中
    {
        visited[a][b] = 1;
        if(data[a][b] != '0')
        {
            ans++;//該連通塊的成員數量++
            maxAns = max(maxAns, ans);
            string s1 = "XILJ",//為有向上開口的水管
                   s2 = "XI7F",//為有向下開口的水管
                   s3 = "XHLF",//為有向右開口的水管
                   s4 = "XH7J";//為有向左開口的水管
            if(first)    ans=1;//若1, 連通塊計數設回1(只有從主函式呼叫的才會是1, 代表是新的連通塊)
            if(s1.find(data[a][b])+1)    dfs(a+1, b, n, m, 0, data, visited, ans, maxAns, s2);//判斷如果被選的元素有向 上 的開口, 就dfs下面的元素
            if(s2.find(data[a][b])+1)    dfs(a-1, b, n, m, 0, data, visited, ans, maxAns, s1);//                     下             上
            if(s3.find(data[a][b])+1)    dfs(a, b+1, n, m, 0, data, visited, ans, maxAns, s4);//                     右             左
            if(s4.find(data[a][b])+1)    dfs(a, b-1, n, m, 0, data, visited, ans, maxAns, s3);//                     左             右
        }
    }
}

int main()    //    https://zerojudge.tw/ShowProblem?problemid=m372
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, ans=0, maxAns=0;
    cin >> n >> m;
    vector <string> data(n);
    vector <vector <bool>> visited(n, vector <bool> (m));
    f2(i, n)    cin >> data[i];
    f2(i, n)    f2(j, m)    dfs(i, j, n, m, 1, data, visited, ans, maxAns, "FH7IXLJ0");
    cout << maxAns;
    return 0;
}
