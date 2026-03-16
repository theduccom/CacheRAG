#include <iostream>
#include <queue>
#include <string>
#define MAX 5100
#define MAX_TIMES 50
using namespace std;

typedef pair<int, string> P;
const string final_str = "01234567";

string str[8][MAX];
int str_times[8][MAX];
int count[8];

bool match(string s) {
  int t = s[0] - '0';
  for (int i = 0; ; i++) {
    if (str[t][i] == s) return true;
    if (str[t][i] == "\0") break;
  }
  return false;
}

string s_swap(int a, int b, string s) {
  string k = s;
  char t = k[a];
  k[a] = k[b];
  k[b] = t;
  
  return k;
}

void bfs() {
  queue<P> q;
  P temp;
  temp.first = 0;
  temp.second = final_str;
  q.push(temp);
  str[0][0] = temp.second;
  str_times[0][0] = temp.first;
  count[0]++;

  while (q.empty() == false) {
    temp = q.front();
    q.pop();
    string s = temp.second;
    for (int i = 0; i < 8; i++) {
      if (s[i] == '0') {
	string k[4];
	for (int j = 0; j < 4; j++) {
	  k[j] = "\0";
	}
	
	if (i != 0 && i != 4) {
	  k[0] = s;
	  k[0] = s_swap(i - 1, i, k[0]);
	}
	if (i != 3 && i != 7) {
	  k[1] = s;
	  k[1] = s_swap(i, i + 1, k[1]);
	}
	if (i <= 3) {
	  k[2] = s;
	  k[2] = s_swap(i, i + 4, k[2]);
	}
	if (i >= 4) {
	  k[3] = s;
	  k[3] = s_swap(i - 4, i, k[3]);
	}
	for (int j = 0; j < 4; j++) {
	  if (k[j] == "\0") continue;
	  if (match(k[j]) == false) {
	    P temp2;
	    temp2.first = temp.first + 1;
	    temp2.second = k[j];
	    int n = temp2.second[0] - '0';
	    str[n][count[n]] = temp2.second;
	    str_times[n][count[n]] = temp2.first;
	    count[n]++;
	    q.push(temp2);
	  }
	}
      }
    }
  }
}

void init() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < MAX; j++) {
      str[i][j] = "\0";
      str_times[i][j] = 0;
    }
  }
  for (int i = 0; i < 8; i++) {
    count[i] = 0;
  }
}

int main() {
  init();
  bfs();
  
  int a[8];
  while (cin >> a[0]) {
    for (int i = 1; i < 8; i++)
      cin >> a[i];

    string s;
    for (int i = 0; i < 8; i++) {
      s.push_back(a[i] + '0');
    }

    int t = s[0] - '0';
    for (int i = 0; ; i++) {
      if (str[t][i] == "\0") break;
      if (str[t][i] == s) {
	cout << str_times[t][i] << endl;
	break;
      }
    }
  }
  return 0;
}