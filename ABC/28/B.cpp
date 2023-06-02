#include <bits/stdc++.h>
using namespace std;

string S;

int main(){
    cin >> S;
    map<char,int> mp;

    for(int i=0;i<S.size();i++){
        mp[S.at(i)]++;
    }

    cout << mp['A'] << " ";
    cout << mp['B'] << " ";
    cout << mp['C'] << " ";
    cout << mp['D'] << " ";
    cout << mp['E'] << " ";
    cout << mp['F'] << endl;
}