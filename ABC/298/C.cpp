#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;

    vector<vector<int>> box(N+1);
    vector<vector<int>> card(1000001);

    int q,i,j;
    for(int l=1;l<=Q;l++){
        cin >> q;
        if(q==1){
            cin >> i >> j;
            box.at(j).push_back(i);
            if(count(card.at(i).begin(),card.at(i).end(),j)==0) card.at(i).push_back(j);
        }else if(q==2) {
            cin >> i;
            sort(box.at(i).begin(),box.at(i).end());
            // cout << " - ";
            for(int m=0;m<box.at(i).size();m++){
                cout << box.at(i).at(m)  << " ";
            }
            cout << endl;
        }else if(q==3) {
            cin >> i;
            sort(card.at(i).begin(),card.at(i).end());
            // cout << " - ";
            for(int m=0;m<card.at(i).size();m++){
                cout << card.at(i).at(m) << " ";
            }
            cout << endl;
        }
    }
}