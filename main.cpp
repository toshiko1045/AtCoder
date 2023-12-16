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
  int v1s = v1.size();
  int v2s = v2.size();
  int ts = v1s + v2s;
  vector<vector<int>> m = vector<vector<int>>(v2s, vector<int>(ts, 0));
  for (int i = 0; i < v2s; i++) {
    for (int j = 0; j < v1s; j++) {
      int t = v2.at(v2s - i - 1) * v1.at(v1s - j - 1);
      if (t >= 10) {
        m.at(i).at(ts - j - i - 1) += t % 10;
        m.at(i).at(ts - j - i - 2) += t / 10;
      } else {
        m.at(i).at(ts - j - i - 1) += t;
      }
    }
  }
  vector<int> ans = vector<int>(v1.size() + v2.size(), 0);
  for (int i = 0; i < v2.size(); i++) {
    for (int j = 0; j < v1.size() + v2.size(); j++) {
      ans.at(j) += m.at(i).at(j);
    }
  }
  return ans;
}

vector<int> splitdigit(int n){
  vector<int> ans;
  while(true){
    int t=  n%10;
    ans.insert(ans.begin(),t);
    n = (n - t) / 10;
    if (n == 0) break;
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
       
  }
}