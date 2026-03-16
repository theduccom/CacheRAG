#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int n;
long long id[4000];
 long long value[4000];
 long long number[4000];
map<long long,  long long> total;

int main() {
  while(true){
    cin >> n;
    if(n==0){
        return 0;
    }
    vector<long long> v;
    for (int i = 0; i < n; i++) {
        cin >> id[i] >> value[i] >> number[i];
        if(total.find(id[i])==total.end()){
          total.insert(make_pair(id[i], 0));
        }
        total[id[i]] += value[i] * number[i];
        // if (total[id[i]] > 1000000 && find(v.begin(), v.end(), id[i]) == v.end()) {
        //   v.push_back(id[i]);
        // }
    }
    if(!total.empty()) {
        map< long long,  long long>::iterator it = total.begin();
        while (it != total.end()) {
            if ((*it).second >= 1000000) {
                v.push_back((*it).first);
            }
            ++it;
        }
    }
    if (v.empty()) {
        cout << "NA" << endl;
    }
    // for (vector<long long>::iterator it = v.begin(); it != v.end(); ++it) {
    //     cout << *it << endl;
    // }
    vector<long long> used;
    for(int i=0; i<n;i++){
      if(std::find(v.begin(), v.end(), id[i]) != v.end() && std::find(used.begin(), used.end(), id[i]) == used.end()){
        cout << id[i] << endl;
        used.push_back(id[i]);
      }
    }
    v.clear();
    total.clear();
  }
}