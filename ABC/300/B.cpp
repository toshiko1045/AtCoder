#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int H,W;
vector<vector<char>> A,B;

int main(){
    cin >> H >> W;
    A = vector<vector<char>>(H,vector<char>(W,0));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++) cin >> A.at(i).at(j);
    }
    B = vector<vector<char>>(H,vector<char>(W,0));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++) cin >> B.at(i).at(j);
    }

    for(int i=0;i<H;i++){ //縦ずらし
        for(int j=0;j<W;j++){ //横ずらし
            bool isok = true;
            for(int k=0;k<H;k++){ //縦
                for(int l=0;l<W;l++){ //横
                    int h = k+i>=H?k+i-H:k+i;
                    int w = l+j>=W?l+j-W:l+j;
                    // cout << h << " " << w << endl;
                    if(A.at(h).at(w)!=B.at(k).at(l)) {
                        isok = false;
                        break;
                    }
                }
            }
            if(isok){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}