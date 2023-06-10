#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int n;
vector<int> a,b;

int main(){
    cin >> n;
    a = vector<int>(n);
    for(int i=0;i<n;i++) cin >> a.at(i);

    for(int i=0;i<n;i++){
        b.push_back(a.at(i));
        reverse(b.begin(),b.end());
    }

    for(int i=0;i<n;i++) cout << b.at(i) << " ";
    cout << endl;
}