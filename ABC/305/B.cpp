#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

char p,q;
map<pair<char,char>,int> m;

int main(){
    cin >> p >> q;
    
    m[pair<char,char>('A','B')] = 3;
    m[pair<char,char>('B','A')] = 3;
    m[pair<char,char>('B','C')] = 1;
    m[pair<char,char>('C','B')] = 1;
    m[pair<char,char>('C','D')] = 4;
    m[pair<char,char>('D','C')] = 4;
    m[pair<char,char>('D','E')] = 1;
    m[pair<char,char>('E','D')] = 1;
    m[pair<char,char>('E','F')] = 5;
    m[pair<char,char>('F','E')] = 5;
    m[pair<char,char>('F','G')] = 9;
    m[pair<char,char>('G','F')] = 9;

    int r=0;
    if((int)p<(int)q){
        while(true){
            r += m[pair<int,int>(p,p++)];
            if(p==q) break;
        }
    }else{
        while(true){
            r += m[pair<int,int>(q,q++)];
            if(p==q) break;
        }
    }
    cout << r << endl;

}