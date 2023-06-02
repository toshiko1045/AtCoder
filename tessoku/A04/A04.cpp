#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> R(10,"0");
    for(int i=0;i<10;i++){
        R.at(9-i) = N%2==1 ? "1":"0";
        N /= 2;
    }
    
    for(int i=0;i<10;i++){
        cout << R.at(i);
    }
    cout << endl;
}