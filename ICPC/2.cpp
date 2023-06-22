#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main(){
    while(true){
        int n,p;cin >> n >> p;
        if(n==0&&p==0) return 0;
        int wan=p;
        vector<int> temoto = vector<int>(n,0);
        int idx = 0;
        int b=0;
        while(true){
            if(wan>0){
                wan--;
                if((temoto[(idx++)%n]++)==1)b++;
                if(wan==0&&b==1){
                    cout << (idx++)%n << endl;
                    return 0;
                }
            }else{
                if(temoto[(idx)%n]>0){
                    wan += temoto[(idx++)%n];
                    temoto[(idx++)%n]=0;
                    b--;
                }
            }
        }
    }
}