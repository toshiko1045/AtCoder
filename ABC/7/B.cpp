#include <bits/stdc++.h>
using namespace std;

string A;
int main(){
    cin >> A;
    int Alen = A.length();
    if(Alen>1) {
        for(int i=0;i<Alen-1;i++) cout << A.at(i);
    }else if(Alen==1 && A.at(0)!='a'){
        cout << (char)(A.at(0)-1);
    }else{
        cout << -1;
    }
    cout << endl;
}