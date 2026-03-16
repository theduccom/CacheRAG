#include<bits/stdc++.h>
using namespace std;
template<typename T1, typename T2> istream& operator>>(istream& is, pair<T1, T2>& a){ return is >> a.first >> a.second; }
template<typename T1, typename T2> ostream& operator<<(ostream& os, pair<T1, T2>& a){ return os << a.first << " "<<a.second; }
template<typename T> istream& operator>>(istream& is, vector< T >& vc){ for(int i = 0; i < vc.size(); i++) is >> vc[i]; return is; }
template<typename T> ostream& operator<<(ostream& os, vector< T >& vc){ for(int i = 0; i < vc.size(); i++) os << vc[i] << endl; return os; }

main()
{
  vector< int > b(3);
  cin >> b;
  if(b[0] & b[1] || b[2]) {
    cout << "Open" << endl;
  } else {
    cout << "Close" << endl;
  }
}