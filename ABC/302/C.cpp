#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<string> S;
vector<bool> B;

int main(){
    cin >> N >> M;
    S = vector<string>(N);
    for(int i=0;i<N;i++){
       cin >> S.at(i); 
    }
    sort(S.begin(),S.end());
    do{
        bool ok = true;
        for(int i=1;i<N;i++){
            int cnt = 0;
            for(int j=0;j<M;j++){
                if(S.at(i-1).at(j)!=S.at(i).at(j)) cnt++;
            }
            if(cnt!=1) ok = false;
        }
        
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
        
    }while(next_permutation(S.begin(),S.end()));
    cout << "No" << endl;
    return 0;
}