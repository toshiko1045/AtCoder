#include <bits/stdc++.h>
using namespace std;

int main(){
    int D,N;
    cin >> D >> N;
    vector<int> day(D+1);

    int l,r;
    for(int i=0;i<N;i++){
        cin >> l >> r;
        for(int j=l;j<=r;j++){
            day.at(j)+=1;
        }
    }

    for(int i=1;i<D+1;i++){
        cout << day.at(i) << endl;
    }
}