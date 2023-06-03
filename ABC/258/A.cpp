#include <bits/stdc++.h>
using namespace std;

int K;

int main(){
    cin >> K;
    string k;
    k = to_string(K);
    k = string(max(0,2-(int)k.size()),'0') + k;
    if(K<60){
        cout << "21:";
        printf("%02d\n",K);
    }else{
        cout << "22:";
        printf("%02d\n",K-60);
    }
    return 0;
}