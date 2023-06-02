#include <bits/stdc++.h>
using namespace std;

int l,r,c;
vector<int> L,R;
map<int,int> mp;

int main(){
    cin >> l >> r;
    L = vector<int>(l+1);
    R = vector<int>(r+1);
    for(int i=1;i<=l;i++) {
        cin >> L.at(i);
        mp[L.at(i)]++;
    }
    for(int i=1;i<=r;i++) {
        cin >> R.at(i);
        if(mp.count(R.at(i))>0){
            c++;
        }
    }
    cout << c << endl;
}