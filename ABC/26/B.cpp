#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int N;
vector<int> R;

int main(){
    cin >> N;
    R = vector<int>(N);
    for(int i=0;i<N;i++) cin >> R.at(i);

    sort(R.begin(),R.end());
    reverse(R.begin(),R.end());

    float r;
    float result = 0;
    for(int i=0;i<N;i++){
        r = R.at(i);
        result += (i+1)%2==0?-1*r*r:r*r;
    }
    cout << fixed << setprecision(10);
    cout << result*M_PI << endl;
}