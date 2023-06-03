#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;
vector<vector<int>> A;

int main(){
    cin >> N;
    A = vector<vector<int>>(N,vector<int>(N));

    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) {
                A.at(i).at(j)=1;
                cout << 1 << " ";
            }
            else{
                A.at(i).at(j)=A.at(i-1).at(j-1)+A.at(i-1).at(j);
                cout << A.at(i).at(j) << " ";
            } 
        }
        cout << endl;
    }
}