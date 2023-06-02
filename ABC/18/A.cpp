#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    if(A>B>C) cout << "1\n2\n3\n";
    if(A>C>B) cout << "1\n3\n2\n";
    if(B>A>C) cout << "2\n1\n3\n";
    if(B>C>A) cout << "2\n3\n1\n";
    if(C>A>B) cout << "3\n1\n2\n";
    if(C>B>A) cout << "3\n2\n1\n";

}