#include <bits/stdc++.h>
using namespace std;

int n,m,x,t,d;

int main(){
    cin >> n >> m >> x >> t >> d;
    if(m<x){
        cout << t-d*(x-m) << endl;
        return 0;
    }else{
        cout << t << endl;
        return 0;
    }
    return 0;
}