#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

deque<char> q;
int Q;
string s;

int main(){
    cin >> s;
    for(int i=0;i<s.size();i++)q.push_back(s.at(i));

    cin >> Q;
    bool b = true; //true:左が先頭,false:右が先頭
    for(int i=0;i<Q;i++){
        int T;
        cin >> T;
        if(T==1){
            if(b)b=false;
            else b=true;
        }
        else{
            int F;
            char C;
            cin >> F >> C;
            if(F==1){
                if(b) q.push_front(C);
                else q.push_back(C);
            }else{
                if(b) q.push_back(C);
                else q.push_front(C);
            }
        }
    }

    if(b){
        for(int i=0;i<q.size();i++) cout << q.at(i);
    }else{
        for(int i=q.size()-1;i>=0;i--) cout << q.at(i);
    }
    cout << endl;

}