#include <bits/stdc++.h>
using namespace std;

int N,A,B;

int main(){
    cin >> N >> A >> B;
    int t = N%(A+B);
    if(t<=A && t!=0) cout << "Ant" << endl;
    else cout << "Bug" << endl;
}