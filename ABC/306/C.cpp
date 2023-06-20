#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;
map<int,int> cnt;
map<int,int> f;
vector<pair<int,int>> p;

int main(){
    cin >> N;
    for(int i=0;i<3*N;i++){
        int a;
        cin >> a;
        cnt[a]++;
        if(cnt[a]==2){
            f[a] = i+1;
            p.push_back(pair<int,int>(i+1,a));
        }
    }
    sort(p.begin(),p.end());

    for(int i=0;i<p.size();i++){
        cout << p.at(i).second << " ";
    }

    cout << endl;
    
}