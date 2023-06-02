#include <bits/stdc++.h>
using namespace std;

int N;
string S,R;

int main(){
    cin >> N >> S;
    R = "";
    char s;
    int a = 0;
    int b = 0;
    for(int i=0;i<N;i++){
        s = S.at(i);
        if(s=='C'){
            for(int j=0;j<a;j++) cout << 'A';
            for(int j=0;j<b/2;j++) {
                cout << 'A';
                b=b%2==0?0:1;
            }
            for(int j=0;j<b;j++) cout << 'B';
            cout << 'C';
            a=0;
            b=0;
        }else if(s=='B'){
            b++;
        }else if(s=='A'){
            a++;
        }
    }
    if(a>0 || b>0){
        for(int j=0;j<a;j++) cout << 'A';
        for(int j=0;j<b/2;j++) {
            cout << 'A';
            b=b%2==0?0:1;
        }
        for(int j=0;j<b;j++) cout << 'B';
    }
    cout << endl;
}