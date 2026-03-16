#include <bits/stdc++.h>

using namespace std;

#define TEMP_T template<typename T>
TEMP_T void sort(T& v){ sort(v.begin(), v.end()); }
TEMP_T void revs(T& v){ reverse(v.begin(), v.end()); }
TEMP_T void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end())); }
TEMP_T void show(T& v, char delim=' ', char end='\n'){ for(int i=0; i<v.size()-1; i++) cout << v[i] << delim; cout << v[v.size()-1] << end; }
TEMP_T T    cums(T& v){ T r; r.push_back(v[0]); for(int i=1; i<v.size(); i++) r.push_back(r[i-1] + v[i]); return r; }
TEMP_T void maxe(T& v, T m){ v = max(v, m); }
TEMP_T void mine(T& v, T m){ v = min(v, m); }

static inline int in(){ int x; scanf("%d", &x); return x; }

static inline int stoi(const string& s){
  int x = 0;
  for (int i = 0; i < s.size(); i++){
    x = x * 10 + (s[i] - '0');
  }
  return x;
}

struct Solver {
  Solver() {}
  void build(){
    queue<string> Q;
    int turn = 0;
    Q.push("01234567");
    while (!Q.empty()){
      queue<string> nQ;
      while (!Q.empty()){
        string s = Q.front();
        Q.pop();
        int mv = stoi(s);
        if (memo.find(mv) != memo.end()) continue;
        memo[mv] = turn;
        int zp = s.find('0');
        int zx, zy;
        zx = zp % 4;
        zy = zp / 4;
        for (int d = 0; d < 4; d++){
          static const int dx[] = {1, -1, 0, 0};
          static const int dy[] = {0, 0, 1, -1};
          int nx = zx + dx[d];
          int ny = zy + dy[d];
          if (nx < 0 || nx >= 4 || ny < 0 || ny >= 2) continue;
          string next_s = s;
          swap(next_s[zp], next_s[ny * 4 + nx]);
          nQ.push(next_s);
        }
      }
      swap(Q, nQ);
      turn++;
    }
  }
  int solve(const string& state){
    return memo[stoi(state)];
  }
  map<int, int> memo;
};

int main()
{
  Solver solver;
  solver.build();
  string s;
  while (getline(cin, s)){
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    printf("%d\n", solver.solve(s));
  }

  return 0;
}