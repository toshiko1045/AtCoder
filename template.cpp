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


int main(){
    vector<int>    v1 = vector<int>(5,11);
    myprivi(v1);
    vector<ll>     v2 = vector<ll>(5,11);
    myprivll(v2);
    vector<double> v3 = vector<double>(5.,11.);
    myprivd(v3);
    vector<ld>     v4 = vector<ld>(5.,11.);
    myprivld(v4);
    pair<int,int>  p  = make_pair(1,2);
    mypripii(p);
    map<int,int>m;
    m[1] = 11;
    m[11]= 1111;
    m[555]=555555;
    myprimii(m);
}