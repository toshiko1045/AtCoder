#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

void mypmii(map<int,int> m){
    auto b=m.begin();
    auto e=m.end();
    for(auto itr=b;itr!=e;itr++){
        cout << itr->first << " " << itr->second << endl;
    }
}

int N,W;
vector<int>S,T,P;
map<int,int> m;

int main(){
    cin >> N >> W;
    S = vector<int>(N);
    T = vector<int>(N);
    P = vector<int>(N);
    for(int i=0;i<N;i++) cin >>  S.at(i) >> T.at(i) >> P.at(i);

    for(int i=0;i<N;i++){
        int s=S.at(i);
        int t=T.at(i);
        int p=P.at(i);
        for(int j=s;j<t;j++){
            m[j]+=p;
            if(m[j]>W){
                mypmii(m);
                cout << "No" << endl;
                return 0;
            }
        }
    } 
    cout << "Yes" << endl;
    return 0;
}