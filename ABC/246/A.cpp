#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void mypmii(map<int,int> m){
    auto b=m.begin();
    auto e=m.end();
    for(auto itr=b;itr!=e;itr++){
        cout << itr->first << " " << itr->second << endl;
    }
}

map<int,int> mx,my;

int main(){
    int x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    mx[x1]++;
    mx[x2]++;
    mx[x3]++;
    my[y1]++;
    my[y2]++;
    my[y3]++;
    // mypmii(mx);
    // mypmii(my);
    if(mx[x1]==1) cout << x1 << " ";
    if(mx[x2]==1) cout << x2 << " ";
    if(mx[x3]==1) cout << x3 << " ";
    if(my[y1]==1) cout << y1 << endl;
    if(my[y2]==1) cout << y2 << endl;
    if(my[y3]==1) cout << y3 << endl;

}