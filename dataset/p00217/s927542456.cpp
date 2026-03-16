#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Patient{
  int id;
  int walked;
  bool operator<(const Patient &t)const{
    return walked < t.walked;
  }
};

int main()
{
  while(true){
    int n;
    vector<Patient> v;
    cin >> n;
    if( n == 0 ) break;
    for(int i = 0; i < n; ++i){
      Patient tmp;
      int p, d1, d2;
      cin >> p >> d1 >> d2;
      tmp.id = p;
      tmp.walked = d1 + d2;
      v.push_back( tmp );
    }
    sort( v.begin(), v.end() );
    reverse( v.begin(), v.end() );
    cout << v[0].id << ' ' << v[0].walked << endl;
  }
  return 0;
}