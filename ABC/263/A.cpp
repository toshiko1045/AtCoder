#include <bits/stdc++.h>
using namespace std;

int a,b,c,d,e;

int main(){
    cin >> a >> b >> c >> d >> e;

    map<int,int>m;

    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;
    m[e]++;

    if(m.size()==2 && (m[a]==2 || m[a]==3)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

    
}