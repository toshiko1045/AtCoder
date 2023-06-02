#include <bits/stdc++.h>
using namespace std;

int H,W;
vector<vector<char>> S;

int main(){
    cin >> H >> W;
    S = vector<vector<char>>(H+4,vector<char>(W+4,'@'));
    for(int i=2;i<=H+1;i++){
        for(int j=2;j<=W+1;j++) cin >> S.at(i).at(j);
    }

    for(int i=2;i<=H+1;i++){
        for(int j=2;j<=W+1;j++){
            char s = S.at(i).at(j);
            if(s=='u'){
                if(S.at(i-2).at(j)=='s' && S.at(i-1).at(j)=='n' && S.at(i+1).at(j)=='k' && S.at(i+2).at(j)=='e'){
                    for(int k=1;k<=5;k++){
                        cout << i-1-3+k << " " << j-1 << endl;
                    }
                }else if(S.at(i-2).at(j)=='e' && S.at(i-1).at(j)=='k' && S.at(i+1).at(j)=='n' && S.at(i+2).at(j)=='s'){
                    for(int k=1;k<=5;k++){
                        cout << i-1+3-k << " " << j-1 << endl;
                    }
                }else if(S.at(i).at(j-2)=='s' && S.at(i).at(j-1)=='n' && S.at(i).at(j+1)=='k' && S.at(i).at(j+2)=='e'){
                    for(int k=1;k<=5;k++){
                        cout << i-1 << " " << j-1-3+k << endl;
                    }
                }else if(S.at(i).at(j-2)=='e' && S.at(i).at(j-1)=='k' && S.at(i).at(j+1)=='n' && S.at(i).at(j+2)=='s'){
                    for(int k=1;k<=5;k++){
                        cout << i-1 << " " << j-1+3-k << endl;
                    }
                }else if(S.at(i-2).at(j-2)=='s' && S.at(i-1).at(j-1)=='n' && S.at(i+1).at(j+1)=='k' && S.at(i+2).at(j+2)=='e'){
                    for(int k=1;k<=5;k++){
                        cout << i-1-3+k << " " << j-1-3+k << endl;
                    }
                }else if(S.at(i-2).at(j-2)=='e' && S.at(i-1).at(j-1)=='k' && S.at(i+1).at(j+1)=='n' && S.at(i+2).at(j+2)=='s'){
                    for(int k=1;k<=5;k++){
                        cout << i-1+3-k << " " << j-1+3-k << endl;
                    }
                }else if(S.at(i-2).at(j+2)=='s' && S.at(i-1).at(j+1)=='n' && S.at(i+1).at(j-1)=='k' && S.at(i+2).at(j-2)=='e'){
                    for(int k=1;k<=5;k++){
                        cout << i-1-3+k << " " << j-1+3-k << endl;
                    }
                }else if(S.at(i-2).at(j+2)=='e' && S.at(i-1).at(j+1)=='k' && S.at(i+1).at(j-1)=='n' && S.at(i+2).at(j-2)=='s'){
                    for(int k=1;k<=5;k++){
                        cout << i-1+3-k << " " << j-1-3+k << endl;
                    }
                }
            }
        }
    }
}