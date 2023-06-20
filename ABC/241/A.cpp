#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

vector<int> a = vector<int>(10);

int main(){
    for(int i=0;i<=9;i++) cin >> a.at(i);

    cout << a.at(a.at(a.at(0))) << endl;

}