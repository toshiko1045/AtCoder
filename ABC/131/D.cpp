#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A,B;
vector<pair<int,int>> P;
vector<int> S;

int main(){
    cin >> N;
    A = vector<int>(N);
    B = vector<int>(N);
    P = vector<pair<int,int>>(N);
    S = vector<int>(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i) >> B.at(i);
        P.at(i).first  = B.at(i);
        P.at(i).second = A.at(i);
    }
    sort(P.begin(),P.end());
    S.at(0) = P.at(0).second;
    for(int i=1;i<N;i++){
        // cout << P.at(i).first << " " << P.at(i).second << endl;
        S.at(i) = S.at(i-1)+P.at(i).second;
    }

    for(int i=0;i<N;i++){
        // cout << S.at(i) << " " << P.at(i).first << endl;
        if(S.at(i)>P.at(i).first){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}