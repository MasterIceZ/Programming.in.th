#include <bits/stdc++.h>
using namespace std;
int32_t main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a1,b1,a2,b2,n,m;
    cin >> n >> m;
    if(n==1){
        cin >> a1;
        b1 = 1e9 ;
    }
    else{
        vector<int>v(n);
        for(int i=0;i<n;++i){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        a1 = v[0];
        b1 = v[1];
    }
    if(m==1){
        cin >> a2;
        b2 = 1e9;
    }
    else{
        vector<int>v(m);
        for(int i=0;i<m;++i){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        a2 = v[0];
        b2 = v[1];
    }
    priority_queue<int,vector<int>,greater<int>>ans;
    ans.push(a1+b1);
    ans.push(a1+a2+100);
    ans.push(a2+b2);
    
    cout << ans.top() << '\n';
    return 0;
}