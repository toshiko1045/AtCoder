#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;
vector<int> M;

int main(){
    cin >> N;
    A = vector<int>(N,0);
    M = vector<int>(N,0);
    for(int i=0;i<N;i++) cin >> A.at(i);
    for(int i=0;i<N;i++) M.at(i) = i;

    for(int i=0;i<N;i++){
        auto itri = find(M.begin(),M.end(),i);
        if(itri!=M.end()){
            int a = A.at(i);
            // for(int j=0;j<M.size();j++) cout << M.at(j) << " ";
            // cout << endl; 
            auto itr = find(M.begin(),M.end(),a-1);
            if(itr==M.end()) continue;
            else {
                M.erase(itr);
            }
        }
    }
    cout << M.size() << endl;
    for(int i=0;i<M.size();i++) cout << M.at(i)+1 << " ";
    cout << endl;
    return 0;

}