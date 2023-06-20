#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int N;
vector<int> a,b;
map<int,int> m;

int main(){
    cin >> N;
    a = vector<int>(N);
    b = vector<int>(N);
    for(int i=0;i<N-1;i++) cin >> a.at(i) >> b.at(i);

    for(int i=0;i<N-1;i++){
        m[a.at(i)]++;
        m[b.at(i)]++;
    }
    auto b=m.begin();
    auto e=m.end();
    for(auto itr=b;itr!=e;itr++){
        if(itr->second==N-1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}