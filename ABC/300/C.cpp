#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int H,W;
vector<vector<char>> C;
map<int,int> m;

int main(){
    cin >> H >> W;
    C = vector<vector<char>>(H,vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++) cin >> C.at(i).at(j);
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(C.at(i).at(j)=='#'){
                // cout << i << " " << j << endl;
                int h=1;
                int w=1;
                int cnt1=0;
                while(true){
                    // cout << "11 - " << i-h << " " << j+w << endl;
                    if(i-h<0||j-w<0||i+h>=H||j+w>=W) break;
                    if(C.at(i-(h++)).at(j+(w++))=='#') cnt1++;
                    else break;
                }
                h=1;
                w=1;
                int cnt2=0;
                while(true){
                    // cout << "22 - " << i-h << " " << j-w << endl;
                    if(i-h<0||j-w<0||i+h>=H||j+w>=W) break;
                    if(C.at(i-(h++)).at(j-(w++))=='#') cnt2++;
                    else break;
                }
                h=1;
                w=1;
                int cnt3=0;
                while(true){
                    // cout << "33 - " << i+h << " " << j-w << endl;
                    if(i-h<0||j-w<0||i+h>=H||j+w>=W) break;
                    if(C.at(i+(h++)).at(j-(w++))=='#') cnt3++;
                    else break;
                }
                h=1;
                w=1;
                int cnt4=0;
                while(true){
                    // cout << "44 - " << i+h << " " << j+w << endl;
                    if(i-h<0||j-w<0||i+h>=H||j+w>=W) break;
                    if(C.at(i+(h++)).at(j+(w++))=='#') cnt4++;
                    else break;
                }
                if((cnt1!=0&&cnt2!=0&&cnt3!=0&&cnt4!=0)||(cnt1==cnt2&&cnt2==cnt3&&cnt3==cnt4)){
                    m[cnt1]++;
                    // cout << i << " " << j << endl;
                }
            }
        }
    }

    int N = min(H,W);
    for(int i=1;i<=N;i++){
        if(m.find(i)==end(m)) cout << 0 << " ";
        else cout << m[i] << " ";
    }   
    cout << endl;
}