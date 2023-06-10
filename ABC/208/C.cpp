#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ll N,K;
map<ll,ll> a; //国民番号,index
vector<ll> av;

int main(){
    cin >> N >> K;
    av = vector<ll>(N+1,0);
    for(ll i=1;i<=N;i++){
        int t;
        cin >> t;
        a[t] = i;
    }
    int num=1;
    for(ll i=1;i<=K;i++){
        av[a[num++]]++;
        if(num==N)num=1;
    }
    for(ll i=1;i<=N;i++)cout << av.at(i) << endl;
}