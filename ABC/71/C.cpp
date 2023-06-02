#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;
map<int,int> M;
vector<pair<int,int>> P;

int main(){
    cin >> N;
    A = vector<int>(N);
    for(int i=0;i<N;i++) {
        cin >> A.at(i);
        M[A.at(i)]++;
    }
    P = vector<pair<int,int>>(M.size());
    int pi=0;
    for(auto i=M.begin();i!=M.end();i++){
        P.at(pi).first  = -1*(i->first);
        P.at(pi++).second = -1*(i->second);
    }
    sort(P.begin(),P.end());
    // for(int i=0;i<P.size();i++)cout << P.at(i).first << " " << P.at(i).second << endl;
    int x=0;
    int y=0;
    int P1=0;
    int P2=0;
    bool xb=false;
    bool yb=false;
    for(int i=0;i<P.size();i++){
        P1 = -1*(P.at(i).first);
        P2 = -1*(P.at(i).second);
        // cout << P1 << " " << P2 << endl;
        if(P2>=4 && !xb && !yb){
            x=P1;xb=true;
            y=P1;yb=true;
        }else if(P2>=2 && !xb) {
            x = P1;xb=true;
        }else if(P2>=2 && !yb) {
            y = P1;yb=true;
        }
        // cout << x << " - " << y << endl;
    }
    // cout << x << " " << y << endl;
    cout << x*y << endl;
}