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
template<class T, class... A> void print(const T& first, const A&... rest){print(first);print(rest...);}
template<class T, class... A> void println(const T& first, const A&... rest){print(first);println(rest...);}


int main(){
    print("a", "\n");
    print(1, "\n");
    println("a");
    println(1);

    // print(1,"A", 2, "\n");
    // print('A', "A", 1, 2.45, "\n");

    vector<int> v(5);
    for(int i=0;i<v.size();i++) v.at(i) = i;
    // for(int i : v) print(i);
    print(v, "a\n");
    println(v,"a");

    vector<vector<int>> v2(5, vector<int>(3));
    for(int i=0;i<v2.size();i++) for(int j=0;j<v2.at(i).size();j++) v2.at(i).at(j) = i+j;
    print(v2, "\n");
    println(v2) ;

    int a = 12;
    println(a);

    return 0;
}