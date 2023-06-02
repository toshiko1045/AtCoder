#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;

int main(){
    cin >> N;
    A = vector<int>(N);
    for(int i=0;i<N;i++) cin >> A.at(i);
    int s = accumulate(A.begin(),A.end(),0);
    cout << s << endl;
}