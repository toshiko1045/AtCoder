#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;

int main(){
    cin >> N;
    int n5 = N%10;
    if(n5==0 || n5==1 || n5==2) cout << N-n5%10 << endl;
    else cout << N+(5-n5%10) << endl;
    return 0;
}