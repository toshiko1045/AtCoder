#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main(){
    while(true){
        int n,m; cin >> n >> m;
        if(n==0&&m==0) return 0;
        vector<int> taro = vector<int>(n,0);
        vector<int> hana = vector<int>(m,0);
        for(int i=0;i<n;i++) cin >> taro.at(i);
        for(int i=0;i<m;i++) cin >> hana.at(i);
        int sum_taro = accumulate(taro.begin(),taro.end(),0);
        int sum_hana = accumulate(hana.begin(),hana.end(),0);
        int diff = sum_taro-sum_hana;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(2*(taro[n]-hana[m])==)
            }
        } 
        
    }
}