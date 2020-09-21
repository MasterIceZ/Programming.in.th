#include <bits/stdc++.h>
using namespace std;

int32_t main (){
    int x,last,T,sum;
    sum = 0;
    last = 1e8;
    cin >> T;
    for(int i=0;i<T;++i){
        cin >> x;
        if(last<=x){
            sum += x-last;
        }
        last = x;
    }
    cout << sum << endl;
    return 0;
}