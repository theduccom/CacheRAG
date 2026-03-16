#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct DATA{
  int number;
  int distance;
};

bool Compare(const DATA&, const DATA&);

int main(){
  int i, n, p, d1, d2, d;
  DATA person;
  vector<DATA> data;

  while(1){
    cin >> n;
    if(n == 0) break;

    for(i=0; i<n; ++i){
      cin >> p >> d1 >> d2;
      d = d1 + d2;
      person.number = p;
      person.distance = d;
      data.push_back(person);
    }

    sort(data.begin(), data.end(), Compare);

    cout << data[0].number << " " << data[0].distance << endl;
    data.clear();
  }

  return 0;
}

bool Compare(const DATA& x, const DATA& y){
  return x.distance > y.distance;
}