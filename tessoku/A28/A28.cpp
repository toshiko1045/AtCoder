#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<char> T(N);
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> T.at(i) >> A.at(i);

    int res=0;
    for(int i=0;i<N;i++){
        if(T.at(i)=='+')      res = res%10000 + A.at(i)%10000;
        else if(T.at(i)=='-') res = res%10000 - A.at(i)%10000;
        else if(T.at(i)=='*') res = res%10000 * A.at(i)%10000;
        res %= 10000;
        if(res<0) res += 10000;
        cout << res << endl;
    }
}