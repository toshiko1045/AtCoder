#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

string s;

int main(){
    cin >> s;

    int r=0;
    for(int i=0;;i++){
        cout << s;
        r += s.size();
        if(r==6){ 
            cout << endl;
            return 0;
        }
    }
}