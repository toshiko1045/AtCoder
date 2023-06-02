#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;
    char hex[3];
    sprintf(hex,"%02X",N);
    cout << hex << endl;
}