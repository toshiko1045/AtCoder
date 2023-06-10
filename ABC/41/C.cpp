#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;
vector<int> a;
map<int,int> m;

int main(){
    cin >> N;
    a = vector<int>(N);
    for(int i=0;i<N;i++){
        cin >> a.at(i);
        m[a.at(i)] = i+1;
    }

    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<N;i++) cout << m[a.at(i)] << endl;
}