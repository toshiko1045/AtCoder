#include <bits/stdc++.h>
using namespace std;

int A,B;
map<int,int>m;

int main(){
    cin >> A >> B;

    if(A==1 || A==3 || A==5 || A==7) m[1]++;
    if(B==1 || B==3 || B==5 || B==7) m[1]++;
    if(A==2 || A==3 || A==6 || A==7) m[2]++;
    if(B==2 || B==3 || B==6 || B==7) m[2]++;
    if(A==4 || A==5 || A==6 || A==7) m[4]++;
    if(B==4 || B==5 || B==6 || B==7) m[4]++;

    int r=0;
    if(m[1]>=1) r+=1;
    if(m[2]>=1) r+=2;
    if(m[4]>=1) r+=4;
    cout << r << endl;
}