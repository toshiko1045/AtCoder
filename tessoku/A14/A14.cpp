#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;

    vector<int> A(N+2);
    vector<int> B(N+2);
    vector<int> C(N+2);
    vector<int> D(N+2);
    for(int i=1;i<=N;i++) cin >> A.at(i);
    for(int i=1;i<=N;i++) cin >> B.at(i);
    for(int i=1;i<=N;i++) cin >> C.at(i);
    for(int i=1;i<=N;i++) cin >> D.at(i);

    vector<int> P(N*N+2);
    vector<int> Q(N*N+2);
 
    int tmp=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            P.at(tmp)=A.at(i)+B.at(j);
            Q.at(tmp)=C.at(i)+D.at(j);
            tmp++;
        }
    }


    sort(P.begin(),P.end());
    sort(Q.begin(),Q.end());

    int lft;
    int rit;
    int mid;
    int goal=0;
    bool res=false;
    for(int i=1;i<=N*N;i++){
        lft=0;
        rit=N*N+1;
        goal=K-P.at(i);
        while(lft<rit){
            mid =((lft+rit)/2);
            if(goal==Q.at(mid)){
                res=true;
                break;
            }else if(goal<Q.at(mid)){
                rit=mid-1;
            }else if(Q.at(mid)<goal){
                lft=mid+1;
            }
        }
        if(res) break;
    }
    if(res){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}