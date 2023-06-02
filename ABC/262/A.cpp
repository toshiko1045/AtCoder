#include <bits/stdc++.h>
using namespace std;

int Y;

int main(){
    cin >> Y;

    for(int i=Y;;i++){
        if(i%4==2){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}