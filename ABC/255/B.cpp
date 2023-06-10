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

ld N,K;
vector<ld>A,X,Y;

int main(){
    cin >> N >> K;
    A = vector<ld>(K+1);
    X = vector<ld>(N+1);
    Y = vector<ld>(N+1);
    for(int i=1;i<=K;i++) cin >> A.at(i);
    for(int i=1;i<=N;i++) cin >> X.at(i) >> Y.at(i);
    cout << endl;
    ld mi = (ld)LLONG_MAX;
    ld ma=0.;
    for(int i=1;i<=N;i++){
        mi=(ld)LLONG_MAX;
        for(int j=1;j<=K;j++){
            ld d = sqrtl(((X[i]-X[j])*(X[i]-X[j]))+((Y[i]-Y[j])*(Y[i]-Y[j])));
            cout << i << " " << X[i] << " " << j << " " << X[j] <<endl;
            cout << (X[i]-X[j])*(X[i]-X[j]) << endl;
            cout << d << endl;
            mi = (ld)min(mi,d);
        }
        ma = (ld)max(ma,mi);
    }
    cout << fixed << setprecision(10);
    cout << ma << endl;
}