#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    
    int a;
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    for(int i=0;i<N;i++){
        if(A.at(i)%2==0){
            cout << A.at(i);
            cout << " ";
        }
    }
    cout << endl;
}