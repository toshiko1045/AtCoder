#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    bool ans1=false;
    bool ans2=false;
    
    int t1=0;
    int t2=0;
    for(int i=0;i<=7;i++){
        if(S.at(i)=='B' && t1<1){
            t1=i+1;
        }else if(S.at(i)=='B' && t1>=1){
            t2=i+1;
        }
    }

    if(t1%2 != t2%2) ans1=true;

    int r1=0;
    int r2=0;
    int k =0;
    for(int i=0;i<=7;i++){
        if(S.at(i)=='R' && r1<1){
            r1=i+1;
        }else if(S.at(i)=='R' && r1>=1){
            r2=i+1;
        }else if(S.at(i)=='K'){
            k =i+1;
        }
    }
    if(r1<k && k<r2) ans2=true;
    if(ans1 && ans2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}