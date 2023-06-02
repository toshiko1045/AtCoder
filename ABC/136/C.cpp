#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> H;

int main(){
    cin >> N;
    H = vector<int>(N);
    for(int i=0;i<N;i++) cin >> H.at(i);

    int p = H.at(N-1);
    for(int i=N-2;i>=0;i--){
        int n = H.at(i);
        // cout << n << " " << p << endl;
        if(n-p==1){
            H.at(i) -= 1;
        }else if(p-n>=0){
            
        }else{
            cout << "No" << endl;
            return 0;
        }
        p=H.at(i);
    }
    // for(int i=0;i<N;i++) cout << H.at(i) << " ";
    cout << "Yes" << endl;
    return 0;
}