#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

ull A=0;

int main(){
    for(ld i=0;i<64;i++){
        string a;
        cin >> a;
        if(a=="1"){
            A += (ull)pow(2,i);
        }
    }

    cout << A << endl;
    
}

