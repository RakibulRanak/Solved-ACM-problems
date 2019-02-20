#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a;
  cin >> n;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    sum = sum + a;
  }
  cout << sum << endl;
  return 0;
}

