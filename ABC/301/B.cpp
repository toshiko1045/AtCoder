#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;

int main(){
    cin >> N;
    A = vector<int>(N);
    for(int i=0;i<N;i++) cin >> A.at(i);

    int al=A.at(0);
    int an;
    cout << A.at(0) << " ";
    for(int i=1;i<N;i++){
        int an = A.at(i);
        if(an-al>1){
            for(int j=al+1;j<=an;j++) cout << j << " ";
        }else if(an-al<-1){
            for(int j=al-1;j>=an;j--) cout << j << " ";
        }else {
            cout << an << " ";
        }
        al = an;
    }
}