#pragma region template
// clang-format off
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
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
template<class T> bool isinvec(const vector<T> vec, const T& value){return find(vec.begin(),vec.end(),value)!=vec.end();}
// clang-format on
#pragma endregion

vector<int> calchand(vector<int> v1, vector<int> v2) {
  vector<vector<int>> m =
      vector<vector<int>>(v2.size(), vector<int>(v1.size() + v2.size(), 0));
    
}

int main() {}