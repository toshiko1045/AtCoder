#include <bits/stdc++.h>
using namespace std;

long long  N;
string S;
long long  d_max; //団子最大値
long long  d_now; //現在の団子長さ
bool d1,d2; //団子があるか

int main(){
    cin >> N >> S;

    char s;
    for(int i=0;i<N;i++){
        s=S.at(i);
        if(s=='-') {
            d1=true;
            d_max = max(d_max,d_now);
            d_now = 0;
        }
        if(s=='o'){
            d2=true;
            d_now += 1;
        }
    }
    d_max = max(d_max,d_now);
    if(d1&&d2) cout << d_max << endl;
    else cout << -1 << endl;
}