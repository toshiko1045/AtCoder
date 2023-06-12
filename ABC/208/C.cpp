#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void mypmii(map<ll,ll> m){
    auto b=m.begin();
    auto e=m.end();
    for(auto itr=b;itr!=e;itr++){
        cout << itr->first << " " << itr->second << endl;
    }
}

void mypvll(vector<ll> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

ll N,K;
map<ll,ll> a; //国民番号,index
vector<ll> av;

int main(){
    cin >> N >> K;
    av = vector<ll>(N+1,0);
    for(ll i=1;i<=N;i++){
        int t;
        cin >> t;
        av.at(i) = t;
    }
    int num=1;
    for(ll i=1;i<=K;i++){
        a[av[num++]]++;
        if(num==N+1)num=1;
    }
    for(ll i=1;i<=N;i++)cout << a[av.at(i)] << endl;
}