#include <bits/stdc++.h>
using namespace std;

int R,C;
vector<vector<char>> B;

int main(){
    cin >> R >> C;
    B = vector<vector<char>>(R+1,vector<char>(C+1));
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            cin >> B.at(i).at(j);
        }
    }
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            char b = B.at(i).at(j);
            if(b!='.'&&b!='#'){
                int n = b-'0';
                B.at(i).at(j)='.';
                for(int k=1;k<=R;k++){
                    for(int l=1;l<=C;l++){
                        if(B.at(k).at(l)=='#'&&n>=(abs(i-k)+abs(j-l))){
                            B.at(k).at(l)='.';
                        }
                    }
                }
            }
        }
    }

    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            cout << B.at(i).at(j);
        }
        cout << endl;
    }
}