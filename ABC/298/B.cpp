#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(N+1,vector<int>(N+1)),B(N+1,vector<int>(N+1));
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++) cin >> A.at(i).at(j);
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++) cin >> B.at(i).at(j);
    }


    bool b1=true;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(A.at(i).at(j)==1 && B.at(i).at(j)==0) b1=false;
        }
    }

    bool b2=true;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(A.at(N+1-j).at(i)==1 && B.at(i).at(j)==0) b2=false;
        }
    }

    bool b3=true;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(A.at(N+1-i).at(N+1-j)==1 && B.at(i).at(j)==0) b3=false;
        }
    }

    bool b4=true;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(A.at(j).at(N+1-i)==1 && B.at(i).at(j)==0) b4=false;
        }
    }

    if(b1||b2||b3||b4) cout << "Yes" << endl;
    else cout << "No" << endl;

}