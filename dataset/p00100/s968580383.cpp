#include <iostream>
#include <map>
using namespace std;

int main() {
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;

    map<int, int> data;
    map<int, bool> flag;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      int id, p, num;
      cin >> id >> p >> num;
      for(int j = 0; j < num; j++) {
	data[id] += p;
	if(data[id] >= 1000000 && !flag[id]) {
	  cout << id << endl;
	  flag[id] = true;
	  cnt++;
	  break;
	}
      }
    }
    if(cnt == 0) cout << "NA" << endl;
  }
  return 0;
}