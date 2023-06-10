#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void mypvi(vector<int> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int N;
vector<vector<int>> A;
vector<int> A1,A2;
int main(){
    cin >> N;
    A = vector<vector<int>>(3,vector<int>(N+2,0));
    for(int i=1;i<=2;i++){
        for(int j=1;j<=N;j++){
            cin >> A.at(i).at(j);
        }
    }

    A1 = vector<int>(N+2,0);
    for(int j=1;j<=N;j++){
        A1.at(j) = A1.at(j-1)+A.at(1).at(j);
    }
    A2 = vector<int>(N+2,0);
    for(int j=N;j>=1;j--){
        A2.at(j) = A2.at(j+1)+A.at(2).at(j);
    }
    // mypvi(A1);
    // mypvi(A2);
    int m = 0;
    for(int j=1;j<=N;j++){
        m = max(A1.at(j)+A2.at(j),m);
    }
    cout << m << endl;

    

}