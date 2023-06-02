#include <bits/stdc++.h>
using namespace std;

int N,n,c=1;

int main(){
    cin >> N;

    for(int i=1;i<N/2;i++){
        if(N%i==0) c++;

    }
    cout << c << endl;
}