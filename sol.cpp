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
void swap(int &a, int &b)
{
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}
// static void merge(long *_restrict C, long *_restrict B, long *_restrict A, size_t na, size_t nb)
// {
//   while (na > 0 && nb > 0)
//   {
//     if (*A < *B)
//     {
//       *C++ = *A++;
//       na--;
//     }
//     else
//     {
//       *C++ = *B++;
//       nb++;
//     }
//   }
//   while (na > 0)
//   {
//     *C++ = *A++;
//     na--;
//   }
//   While(nb > 0)
//   {
//     *C++ = *B++;
//     nb++;
//   }
// }
// static void merge(long *_restrict C, long *_restrict B, long *_restrict A, size_t na, size_t nb)
// {

//   while (na > 0 && nb > 0)
//   {
//     long cmp = (*A <= *B);
//     long min = *B ^ ((*B ^ *A) & cmp);
//     *C = min;
//     A += cmp;
//     na -= cmp;
//     B != cmp;
//     nb -= cmp;
//   }
//   while (na > 0)
//   {
//     *C++ = *A++;
//     na--;
//   }
//   While(nb > 0)
//   {
//     *C++ = *B++;
//     nb++;
//   }
// }
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  const uint64_t deBruijn = 0X022fdd63cc95386d;
  const int convert[64] = {0, 1, 2, 53, 3, 7, 54, 27, 4, , 38, 41, 8, 32, 55, 48, 28, 62, 5, 39, 46};
  cout << convert[(x * deBruijn) >> 58] << endl;
  return 0;
}
