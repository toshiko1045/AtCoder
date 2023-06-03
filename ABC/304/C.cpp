#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N,D;
vector<int> X,Y;

int main(){
    cin >> N >> D;
    X = vector<int>(N+1);
    Y = vector<int>(N+1);
    for(int i=1;i<=N;i++) cin >> X.at(i) >> Y.at(i);
    vector<bool> b = vector<bool>(N+1,false);
    b.at(1) = true;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            int a1 = X.at(i);
            int a2 = Y.at(i);
            int b1 = X.at(j);
            int b2 = Y.at(j);
            double d = sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
            // cout << d << endl;
            if(d<=D && i!=j &&b.at(i)) b.at(j)=true;
        }
        // cout << endl << i << endl;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            int a1 = X.at(i);
            int a2 = Y.at(i);
            int b1 = X.at(j);
            int b2 = Y.at(j);
            double d = sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
            // cout << d << endl;
            if(d<=D && i!=j &&b.at(i)) b.at(j)=true;
        }
        // cout << endl << i << endl;
    }

    for(int i=1;i<=N;i++){
        cout << (b.at(i)?"Yes":"No") << endl;
    }

}