#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> A;
vector<int> R;

pair<int,int> my_s(int b,int e,int lim){
    if(e==lim) e--;
    pair<int,int> res;
    res.first = INT_MAX;
    for(int i=b;i<=e;i++){
        if(res.first>A.at(i)){
            res.first  = A.at(i);
            res.second = i;
        }
    }
    return res;
}

int main(){
    cin >> N >> M;
    A = vector<int>(N+1);
    for(int i=1;i<=N;i++) cin >> A.at(i);

    int s_i=1;
    pair<int,int> t;
    for(int i=1;i<=M;i++){
        t = my_s(s_i,N-M+s_i,N);
        R.push_back(t.first);
        s_i = t.second+1;
    }

    for(int i=0;i<M;i++) cout << R.at(i) << " ";
    cout << endl;
}