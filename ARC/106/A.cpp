#include <bits/stdc++.h>
using namespace std;

long long N;

int main(){
    cin >> N;

    for(long long i=1;i<=40;i++){
        for(long long k=1;k<=30;k++){
            if(powl(3,i)+powl(5,k)==N){
                cout << i << " " << k << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}