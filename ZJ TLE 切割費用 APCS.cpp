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

int main()    //    https://zerojudge.tw/ShowProblem?problemid=f607
{
    ll n, m, ans=0;
    cin >> n >> m;
    vector <pair <ll, ll>> cut(n);//存放{第幾刀, 那一刀切割的位置}
    set <ll> data = {0, m};//存放切割的位置, 初始化為最左(0), 最右(m)
    f2(i, n)    cin >> cut[i].second >> cut[i].first;
    sort(&cut[0], &cut[n]);//使 cut 按照切割順序排列
    for(auto i : cut)//遍歷cut, (line29-30 => l=該刀左邊的那一刀, r=該刀右邊的那一刀)
    {
        auto l = upper_bound(begin(data), end(data), i.second);
        auto r = l--;
        ans+=*r-*l;//答案加上r到l的距離
        data.insert(i.second);//將該刀加入data
    }
    cout << ans;
}