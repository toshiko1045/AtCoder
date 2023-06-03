#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int R,C;
vector<vector<int>> A;

int main(){
    cin >> R >> C;
    A = vector<vector<int>>(R+2,vector<int>(C+2));
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++) cin >> A.at(i).at(j);
    }
    cout << A.at(R).at(C) << endl;
}