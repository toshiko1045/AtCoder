#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N,Q;
map<pair<int,int>,bool> m;

int main(){
    cin >> N >> Q;

    // for(int i=0;i<N;i++) {
    //     for(int j=0;j<N;j++) m[pair<int,int>(i,j)]=false;
    // }

    int T,A,B;
    for(int i=0;i<Q;i++){
        cin >> T >> A >> B;
        if(T==1) m[pair<int,int>(A,B)]=true;
        if(T==2) m[pair<int,int>(A,B)]=false;
        if(T==3){
            if(m[pair<int,int>(A,B)] && m[pair<int,int>(B,A)]){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            } 
        }
    }

}