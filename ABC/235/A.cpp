#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int abc,bca,cab,a,b,c;

int main(){
    cin >> abc;
    c = abc%10;
    b = (abc%100-c)/10;
    a = (abc-b*10-c)/100;
    bca = b*100 + c*10 + a;
    cab = c*100 + a*10 + b;
    
    cout << abc+bca+cab <<endl;
}