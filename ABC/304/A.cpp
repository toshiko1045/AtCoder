#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;
vector<string> S;
vector<int> A;

int main(){
    cin >> N;
    S = vector<string>(N);
    A = vector<int>(N);
    for(int i=0;i<N;i++){
        cin >> S.at(i) >> A.at(i);
    }

    int idx = distance(A.begin(),min_element(A.begin(),A.end()));

    for(int i=idx;i<N;i++){
        cout << S.at(i) << endl;
    }
    for(int i=0;i<idx;i++){
        cout << S.at(i) << endl;
    }

}