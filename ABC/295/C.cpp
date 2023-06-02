#include <bits/stdc++.h>
using namespace std;

int N,A;
map<int,int> P;

int main(){
    cin >> N;
    int R=0;
    for(int i=1;i<=N;i++) {
        cin >> A;
        P[A]++;
        if(P[A]%2==0){
            R+=1;
        }
    }
    cout << R << endl;
    return 0;
}