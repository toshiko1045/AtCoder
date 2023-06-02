#include <bits/stdc++.h>
using namespace std;

int N;
int c = 0;
long long s;
vector<pair<long long,long long>> P;

int main(){
    cin >> N;
    P = vector<pair<long long,long long>>(N);
    for(int i=0;i<N;i++) cin >> P.at(i).first >> P.at(i).second;

    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            for(int k=j;k<N;k++){
                if((P.at(i).first-P.at(j).first)*(P.at(j).second-P.at(k).second)==(P.at(i).second-P.at(j).second)*(P.at(j).first-P.at(k).first) && i!=j && j!=k){
                    // cout << P.at(i).first << " " << P.at(i).second << " " << P.at(j).first << " " << P.at(j).second << " " << P.at(k).first << " " << P.at(k).second << endl;
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;

}