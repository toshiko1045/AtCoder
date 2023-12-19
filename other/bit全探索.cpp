int main() {
  int N;

  for (int bit = 0; bit < (1 << N); bit++) {  // 0以上2^N未満
    for (int i = 0; i < N; i++) {
      if (bit & (1 << i)) {  // bitの立っている部分について
      }
    }
  }
}