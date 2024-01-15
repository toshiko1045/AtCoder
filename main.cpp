#pragma region template
// clang-format off
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define rep(i,s,e) for (int i = s; i <= (int)(e); i++)
#define rrep(i,s,e) for (int i = s; i >= (int)(e); i--)
#define all(obj) (obj).begin(), (obj).end()
// ----- 出力系 -----
void print(){cout << "";}
void println(){cout << endl;}
template<class T> void print(const T& value){cout << value;}
template<class T> void println(const T& value){cout << value << endl;}
template<class T, class... A> void print(const T& first, const A&... rest);
template<class T, class... A> void println(const T& first, const A&... rest);
template<class T> void print(const vector<T>& vec){print("[ ");for(T v:vec) print(v," ");print("]");}
template<class T> void println(const vector<T>& vec){print("[ ");for(T v:vec) print(v," ");println("]");}
template<class T, class U> void print(const pair<T,U>& p){print("( ", p.first, " ", p.second, " )");}
template<class T, class U> void println(const pair<T,U>& p){println("( ", p.first, " ", p.second, " )");}
template<class T, class U> void print(const map<T,U>& m){print("{");auto b=m.begin();auto e=m.end();for(auto i=b;i!=e;i++)print(" ", i->first,":", i->second, " ");print("}");}
template<class T, class U> void println(const map<T,U>& m){print("{");auto b=m.begin();auto e=m.end();for(auto i=b;i!=e;i++)print(" ", i->first,":", i->second, " ");println("}");}
template<class T, class... A> void print(const T& first, const A&... rest){print(first);print(rest...);}
template<class T, class... A> void println(const T& first, const A&... rest){print(first);println(rest...);}
// ----- 便利系 -----
template<class T> bool isinvec(const vector<T> vec, const T& value){return find(vec.begin(),vec.end(),value)!=vec.end();}
template<class T> T floor(const T& x, const T& m) {T r=(x%m+m)%m;return (x - r) / m;}
template<class T> T powt(T a, T b){if(b==0)return 1;T ans=1;while(b>0){ans*=a;b--;}return ans;}
template<class T> T chbase(T a, int n, int m){T sum=0;for(T i=0;a!=0;i++){T t=a%10;a/=10;sum+=t*powt(n, i);}T ans=0;for(T i=0;sum>0;i++){ans+=(sum%m)*powt(10,i);sum/=m;}return ans;}
// clang-format on
#pragma endregion

int main() {
    
}