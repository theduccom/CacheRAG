#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class range {
private:
  struct Iterator {
    int val, inc;
    int operator*() {return val;}
    bool operator!=(Iterator& itr) {return val != itr.val;}
    void operator++() {val += inc;}
  };
  Iterator i, n;
public:
  range(int n) : i({0, 1}), n({n, 1}) {}
  range(int i, int n) : i({i, 1}), n({n, 1}) {}
  range(int i, int inc, int n) : i({i, inc}), n({n, inc}) {}
  Iterator& begin() {return i;}
  Iterator& end() {return n;}
};

template<class T> inline T at(const vector<T> &v, int i) {return v[(i % (int)v.size() + v.size()) % v.size()];}

template<class T> inline bool is_max(T &a, const T &b) {return a < b ? a = b, true : false;}
template<class T> inline bool is_min(T &a, const T &b) {return a > b ? a = b, true : false;}

int main() {
  for (int i : range(1, 10)) for (int j : range(1, 10)) cout << i << "x" << j << "=" << i * j << endl;
}