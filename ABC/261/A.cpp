#include <bits/stdc++.h>
using namespace std;

int l1,l2,r1,r2;

int main(){
    cin >> l1 >> r1 >> l2 >> r2;
    
    vector<bool> b1 = vector<bool>(100,false);
    vector<bool> b2 = vector<bool>(100,false);
    for(int i=l1;i<r1;i++) b1.at(i)=true;
    for(int i=l2;i<r2;i++) b2.at(i)=true;

    int c=0;
    for(int i=0;i<100;i++){
        if(b1.at(i) && b2.at(i)) c++;
    }
    cout << c << endl;
}