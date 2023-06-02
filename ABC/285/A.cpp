#include <bits/stdc++.h>
using namespace std;

int a,b;

int main(){
    cin >> a >> b;
    vector<vector<int>> T = vector<vector<int>>(16);
    T.at(1).push_back(2);
    T.at(1).push_back(3);
    
    T.at(2).push_back(1);
    T.at(2).push_back(4);
    T.at(2).push_back(5);

    T.at(3).push_back(1);
    T.at(3).push_back(6);
    T.at(3).push_back(7);

    T.at(4).push_back(2);
    T.at(4).push_back(8);
    T.at(4).push_back(9);

    T.at(5).push_back(2);
    T.at(5).push_back(10);
    T.at(5).push_back(11);

    T.at(6).push_back(3);
    T.at(6).push_back(11);
    T.at(6).push_back(13);

    T.at(7).push_back(3);
    T.at(7).push_back(14);
    T.at(7).push_back(15);

    T.at(8).push_back(4);

    T.at(9).push_back(4);

    T.at(10).push_back(5);

    T.at(11).push_back(5);

    T.at(12).push_back(6);

    T.at(13).push_back(6);

    T.at(14).push_back(7);

    T.at(15).push_back(7);

    auto itr = find(T.at(a).begin(),T.at(a).end(),b);
    if(itr==T.at(a).end()) cout << "No" << endl;
    else cout << "Yes" << endl;
}