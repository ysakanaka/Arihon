int l, n;
int x[Max_N]

void solve() {
  int minT = 0;
  for (int i = 0; i < count; i++) {
    minT = max(minT, min(x[i], l-x[i]))
  }

  int maxT = 0;
  for (int i = 0; i < count; i++) {
    maxT = max(maxT, max(x[i], l-x[i]));
  }
  printf("%d %d\n", minT, maxT);
}
