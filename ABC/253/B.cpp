#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int H,W;
vector<string> S;

int main(){
    cin >> H >> W;
    S = vector<string>(H);
    for(int i=0;i<H;i++) cin >> S.at(i);

    int a,b,x,y;
    bool bl=false;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S.at(i).at(j)=='o'){
                if(bl){
                    a=i;
                    b=j;
                    break;
                }else{
                    x=i;
                    y=j;
                    bl=true;
                }
            }
        }
    }
    cout << abs(a-x)+abs(b-y) << endl;
}