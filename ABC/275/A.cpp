#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> H;

int main(){
    cin >> N;
    H = vector<int>(N);
    for(int i=0;i<N;i++) cin >> H.at(i);
    auto itr = max_element(H.begin(),H.end());
    int idx = distance(H.begin(),itr);
    cout << idx+1 << endl;

    return 0;
}