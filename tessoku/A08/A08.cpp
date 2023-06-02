#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    
    vector<vector<int>> Xsum(H+1,vector<int>(W+1));
    int Xin;
    for(int h=1;h<=H;h++){
        for(int w=1;w<=W;w++){
            cin >> Xin;
            Xsum.at(h).at(w) += Xsum.at(h).at(w-1)+Xin;
        }
    }

    int Q;
    cin >> Q;
    int A,B,C,D;
    int res;
    for(int i=0;i<Q;i++){
        cin >> A >> B >> C >> D;
        res=0;
        for(int j=A;j<=C;j++){
            res += Xsum.at(j).at(D)-Xsum.at(j).at(B-1);
        }
        cout << res << endl;
    }
}