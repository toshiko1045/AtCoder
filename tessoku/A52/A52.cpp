#include <bits/stdc++.h>
using namespace std;


int Q;
queue<string> que;

int main(){
    cin >> Q;

    int q;
    for(int i=0;i<Q;i++){
        cin >> q;
        string x;
        if(q==1){
            cin >> x;
            que.push(x);
        }else if(q==2){
            cout << que.front() << endl;
        }else{
            que.pop();
        }
    }
}