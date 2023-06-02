#include <bits/stdc++.h>
using namespace std;

int N,X;
int s = 0;
vector<int> V,P;

int main(){
    cin >> N >> X;
    V = vector<int>(N);
    P = vector<int>(N);
    for(int i=0;i<N;i++){
        cin >> V.at(i) >> P.at(i);
        s += V.at(i)*P.at(i);
        if(s>X*100){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}