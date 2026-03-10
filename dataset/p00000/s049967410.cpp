#include <bits/stdc++.h>

#define reps(v, f, l) for (int v = (f), v##_ = (l); v < v##_; ++v)
#define rep(v, n) reps(v, 0, n)
#define lep(v, n) reps(v, 1, n + 1)
#define rreps(v, f, l) for (int v = (l), v##_ = (f); v >= v##_; --v)
#define rrep(v, n) rreps(v, 0, n - 1)
#define rlep(v, n) rreps(v, 1, n)
#define show_a(a, size) rep(a##_it, size) std::cout << a[a##_it] << " \n"[a##_it == a##_it_ - 1];
#define show_v(v) show_a(v, v.size())
#define debug(x) std::cerr << #x << " = " << (x) << "\n";

using namespace std;

typedef long long int lint;

static inline int in(){ int x; scanf("%d", &x); return x; }
static inline lint inl(){ lint x; scanf("%lld", &x); return x; }

int main()
{
  lep(i, 9){
    lep(j, 9){
      printf("%dx%d=%d\n", i, j, i * j);
    }
  }
  return 0;
}