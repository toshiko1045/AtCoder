#include <bits/stdc++.h>
using namespace std;

int a,b,c,d,e;
map<int,int>m;

int main(){
    cin >> a >> b >> c >> d >> e;
    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;
    m[e]++;
    cout << m.size() << endl;
}
