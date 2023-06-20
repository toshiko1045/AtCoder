#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;
double D;
vector<double> X,Y;

int main(){
    cin >> N >> D;
    X = vector<double>(N+1);
    Y = vector<double>(N+1);
    for(int i=1;i<=N;i++) cin >> X.at(i) >> Y.at(i);
    vector<bool> b = vector<bool>(N+1,false);
    b.at(1) = true;
    bool t=true;
    while(t){
        t=true;
        for(int i=1;i<=N;i++){
            t=false;
            if(b.at(i)){
                for(int j=1;j<=N;j++){
                    if(!b.at(j)){
                        double a1 = X.at(i);
                        double b1 = X.at(j);
                        double a2 = Y.at(i);
                        double b2 = Y.at(j);
                        double d = pow(a1-b1,2)+pow(a2-b2,2);
                        if(d<=D*D){
                            b.at(j)=true;
                            t=true;
                        }
                    }
                }
            }
        }
    }

    for(int i=1;i<=N;i++){
        cout << (b.at(i)?"Yes":"No") << endl;
    }

}