#include <bits/stdc++.h>
using namespace std;

int N,M;

int main(){
    cin >> N >> M;
    vector<int> n = vector<int>(M);
    map<vector<int>,bool> mp;

    for(int i=1;i<=M;i++) n.at(i-1) = i;

    do{
        vector<int> tmp = vector<int>(N);
        for(int i=0;i<N;i++) tmp.at(i) = n.at(i);
        bool ok = true;
        for(int i=1;i<N;i++){
            if(tmp.at(i)-tmp.at(i-1)<=0) ok = false;
        }
        if(!mp[tmp] && ok){
            mp[tmp]=true;
            for(int i=0;i<N;i++) cout << tmp.at(i) << " ";
            cout << endl;
        }
    }while(next_permutation(n.begin(),n.end()));
}