// AtCoder用です。仕事では使わないようにしましょう(戒め)。
// my 関数名(省略) 型名(省略) 型名(省略)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;


void mypvi(vector<int> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}
void mypvll(vector<ll> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}
void mypvd(vector<double> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}
void mypvld(vector<ld> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}
void myppii(pair<int,int> p){
    cout << p.first << " " << p.second << endl; 
}
void mypmii(map<int,int> m){
    auto b=m.begin();
    auto e=m.end();
    for(auto itr=b;itr!=e;itr++){
        cout << itr->first << " " << itr->second << endl;
    }
}

ll powll(ll x, ll y){
    ll r = 1;
    for(int i=0;i<y;i++) r*=x;
    return r;
}