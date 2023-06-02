#include <bits/stdc++.h>
using namespace std;

int N,M,L,P,Q,R,m;
vector<int> v; 

int main(){
    cin >> N >> M >> L >> P >> Q >> R;
    v.push_back((N/P)*(M/Q)*(L/R));
    v.push_back((N/P)*(M/R)*(L/Q));
    v.push_back((N/Q)*(M/P)*(L/R));
    v.push_back((N/Q)*(M/R)*(L/P));
    v.push_back((N/R)*(M/P)*(L/Q));
    v.push_back((N/R)*(M/Q)*(L/P));
    // for(int i=0;i<6;i++) cout << v.at(i) << " ";
    int m = *max_element(v.begin(),v.end());
    cout << m << endl;
}