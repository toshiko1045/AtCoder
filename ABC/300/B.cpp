#include <bits/stdc++.h>
using namespace std;

int H,W;
int cntSA=0;
int cntSB=0;
int cntDA=0;
int cntDB=0;

vector<vector<char>> A,B;

int main(){
    cin >> H >> W;
    A = vector<vector<char>>(H+1,vector<char>(W+1));
    B = vector<vector<char>>(H+1,vector<char>(W+1));
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin >> A.at(i).at(j);
            if(A.at(i).at(j)=='.') cntSA += 1;
            else if(A.at(i).at(j)=='#') cntDA += 1;
        }
    }
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin >> B.at(i).at(j);
            if(B.at(i).at(j)=='.') cntSB += 1;
         else if(B.at(i).at(j)=='#') cntDB += 1;
        }
    }
    if(cntSA!=cntSB && cntDA!=cntDB) cout << "No" << endl;
    else {
        bool b=true;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                b=true;
                for(int h=1;h<=H;h++){
                    for(int w=1;w<=W;w++){
                        int nowh = h-i<1 ? h-i+H:h-i;
                        int noww = w-j<1 ? w-j+W:w-j;
                        if(A.at(nowh).at(noww)!=B.at(h).at(j)){
                            b = false;
                            break;
                        }
                    }
                    if(!b)break;
                }
                if(b) break;

            }
            if(b) break;
        }
        if(b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}