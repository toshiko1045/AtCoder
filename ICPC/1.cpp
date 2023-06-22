#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main(){
    while(true){
        int n; cin >> n;
        if(n==0) return 0;
        vector<int> s = vector<int>(n);
        for(int i=0;i<n;i++) cin >> s.at(i);
        int max = *max_element(s.begin(),s.end());
        int min = *min_element(s.begin(),s.end());
        int sum = accumulate(s.begin(),s.end(),0);
        cout << (sum-max-min)/(n-2) << endl;
    }
}