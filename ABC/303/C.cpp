#include <bits/stdc++.h>
using namespace std;

int N,M,H,K;
string S;
vector<int> X,Y;

int main(){
    cin >> N >> M >> H >> K >> S;
    X = vector<int>(M);
    Y = vector<int>(M);
    for(int i=0;i<M;i++) cin >> X.at(i) >> Y.at(i);


    int hp = H;
    int nx = 0;
    int ny = 0;
    // printf("\n");
    for(int i=0;i<N;i++){
        hp--;
        if(S.at(i)=='R'){
            nx++;
        }else if(S.at(i)=='L'){
            nx--;
        }else if(S.at(i)=='U'){
            ny++;
        }else if(S.at(i)=='D'){
            ny--;
        }

        auto itrx = find(X.begin(),X.end(),nx);
        auto itry = find(Y.begin(),Y.end(),ny);
        int idxx = distance(X.begin(), itrx);
        int idxy = distance(Y.begin(), itry);
        if(itrx!=X.end() && itry!=Y.end() && idxy==idxx && hp<K){
            hp=K;
            X.erase(X.begin()+idxx);
            Y.erase(Y.begin()+idxy);
        }
        if(hp==0 && i!=N-1){
            cout << "No" << endl;
            return 0;
        }
        // printf("%d,%d,%d\n",nx,ny,hp);
    }
    cout << "Yes" << endl;
}