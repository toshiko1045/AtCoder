#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> a;
map<int,int> m;
long long r=0;

int main(){
    cin >> N >> K;
    a = vector<int>(N,0);
    for(int i=0;i<N;i++) {
        cin >> a.at(i);
        m[a.at(i)]++;
    }

    int t1=m[0];
    int n=m[0];
    int nm=m[0]; //現在の最小値
    printf("\n");
    for(int i=1;i<m.size();i++){
        int t2=m[i];
        printf("%d,%d,%d,%d\n",t2,t1,t2,nm);
        if(t2<=t1 && t2<=nm){
            r += t2;
            nm = t2;
        }
        t1 = t2;
    }
    cout << r << endl;

}