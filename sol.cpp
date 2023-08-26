#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)
string sol() {
  int N, Q;
  cin >> N >> Q;
  string s;
  for (int i = 0; i < N; i++) {
    s += (char)('A' + i);
  }
  return s;
}
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cout << sol();
  return 0;
}
