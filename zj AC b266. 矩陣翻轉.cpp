ll n, m;
    while(cin >> n >> m)
    {
        ll s1, s2=0;
        s1 = n;
        int k = (m-n*2)/2;
        s1-=k;
        s2+=k;
        if(2*s1+4*s2 == m && s1>-1 && s2>-1)
            cout << s1 << ' ' << s2 << '\n';
        else
            cout << "no answer\n";
    }
