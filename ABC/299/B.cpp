#include <bits/stdc++.h>
using namespace std;

int N,T;
vector<int> C,R;
bool t=false;
int C_1;
int R_max=0;
int P_max=0;

int main(){
    cin >> N >> T;
    C = vector<int>(N+1);
    R = vector<int>(N+1);
    
    for(int i=1;i<=N;i++) {
        cin >> C.at(i);
        if(C.at(i)==T) t=true;
    }
    C_1 = C.at(1);

    if(t){
        for(int i=1;i<=N;i++) {
            cin >> R.at(i);
            if(C.at(i)==T){
                if(R_max<=R.at(i)){
                    R_max = R.at(i);
                    P_max = i;
                }
            }
        }
    }else{
        for(int i=1;i<=N;i++) {
            cin >> R.at(i);
            if(C.at(i)==C_1){
                if(R_max<=R.at(i)){
                    R_max = R.at(i);
                    P_max = i;
                }
            }
        }
    }
    cout << P_max << endl;

}