#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N+2);
    for(int i=1;i<=N;i++) cin >> A.at(i);
    
    vector<int> A_sorted = A;
    sort(A_sorted.begin(),A_sorted.end());

    A_sorted.erase(unique(A_sorted.begin(),A_sorted.end()),A_sorted.end());

    vector<int> B(N+2);
    int N_sorted = A_sorted.size();
    int res;
    int lft;
    int rit;
    int mid;
    for(int i=1;i<=N;i++){
        int lft=1;
        int rit=A_sorted.size()-1;
        
        while(lft<=rit){
            mid=(lft+rit)/2;
            if(A_sorted.at(mid)==A.at(i)){
                res=mid;
                break;
            }else if(A.at(i)<A_sorted.at(mid)){
                rit=mid-1;
            }else if(A_sorted.at(mid)<A.at(i)){
                lft=mid+1;
            }
        }
        B.at(i)=mid;
    }
    for(int i=1;i<=N;i++) {
        cout << B.at(i);
        if(i!=N) cout << " ";
    }
    cout << endl;

}