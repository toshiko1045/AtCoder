#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,T;
    cin >> S >> T;
    vector<vector<int>> dp(S.size()+1,vector<int>(T.size()+1,0)); //共通文字の数

    dp.at(0).at(0)=0;
    for(int i=0;i<=S.size();i++){
        for(int j=0;j<=T.size();j++){
            if(i>=1&&j>=1&&S.at(i-1)==T.at(j-1)){
                dp.at(i).at(j)=max({dp.at(i-1).at(j),dp.at(i).at(j-1),dp.at(i-1).at(j-1)+1});
            }else if(i>=1&&j>=1){
                dp.at(i).at(j)=max({dp.at(i-1).at(j),dp.at(i).at(j-1)});
            }else if(i==0&&j!=0){
                dp.at(i).at(j)=dp.at(i).at(j-1);
            }else if(i!=0&&j==0){
                dp.at(i).at(j)=dp.at(i-1).at(j);
            }
        }
    }
    cout << dp.at(S.size()).at(T.size()) << endl;
}