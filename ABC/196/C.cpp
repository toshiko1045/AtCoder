#include <bits/stdc++.h>
using namespace std;

long long N,x,x_s,cnt;

int main(){
    cin >> N;

    for(long long i=1;i<=N;i++){
        x = i;
        x_s = to_string(x).size();
        x = x+x*pow(10,x_s);
        if(x>N) break;
        cnt++;
    }
    cout << cnt << endl;
}