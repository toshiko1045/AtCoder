#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;

    int s = 0;
    for(int i=0;i<N;i++){
        int m;
        cin >> m;

        if(m<80) s += (80-m);
    }
    cout << s << endl;
}