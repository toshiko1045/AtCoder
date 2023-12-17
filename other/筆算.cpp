#include <bits/stdc++.h>
using namespace std;
vector<int> calchand(vector<int> v1, vector<int> v2) {
  int v1s = v1.size();
  int v2s = v2.size();
  int ts = v1s + v2s;
  vector<vector<int>> m = vector<vector<int>>(v2s, vector<int>(ts, 0));
  for (int i = 0; i < v2s; i++) {
    for (int j = 0; j < v1s; j++) {
      int t = v2.at(v2s - i - 1) * v1.at(v1s - j - 1);
      m.at(i).at(ts - j - i - 1) += t % 10;
      m.at(i).at(ts - j - i - 2) += t / 10;
    }
  }

  vector<int> ans = vector<int>(ts + 1, 0);
  int anss = ans.size();
  for (int i = 0; i < ts; i++) {
    int t = ans.at(anss - i - 1);
    for (int j = 0; j < v2s; j++) {
      t += m.at(v2s - j - 1).at(ts - i - 1);
    }
    ans.at(anss - i - 1) = t % 10;
    ans.at(anss - i - 2) = t / 10;
  }

  vector<int> ans2;
  bool b = true;
  for (int i = 0; i < ans.size(); i++) {
    int t = ans.at(i);
    if (t == 0 && b)
      continue;
    else {
      b = false;
      ans2.push_back(t);
    }
  }
  return ans2;
}