#include <bits/stdc++.h>
using namespace std;

long long N;
int m=19;
int c,nvs,s;
string ns;
vector<int> nv;
bool ok = false;

int main(){
    cin >> N;
    ns = to_string(N);
    nvs = ns.size();
    nv = vector<int>(nvs);
    for(int i=0;i<nvs;i++) nv.at(i) = int(ns.at(i)-'0');
    
    for(int i=0;i<(1<<nvs);i++){
        c=0;
        s=0;
        for(int j=0;j<nvs;j++){
            if(i&(1<<j)) {
                s += nv.at(j);
            }else c++;
        }
        if(s%3==0&&s!=0){
            m = min(c,m);
            ok = true;
        }
    }
    if(ok) cout << m << endl;
    else cout << -1 << endl;
    return 0;
}