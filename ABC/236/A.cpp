#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

string s;
int a,b;

int main(){
    cin >> s >> a >> b;
    
    for(int i=0;i<s.size();i++){
        if(i+1==a) cout << s.at(b-1);
        else if(i+1==b) cout << s.at(a-1);
        else cout << s.at(i);
    }

    cout << endl;
}