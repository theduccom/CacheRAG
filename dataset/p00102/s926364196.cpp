#include<iostream>
#include<vector>
using namespace std;

int main(){

  int n;
  while(true) {

    cin>>n;
    if(!n) break;

    vector< vector<int> > v;


    for(int i=0; i<n; i++) {
      vector<int> t;
      int k;
      for(int j=0; j<n; j++) {
	cin>>k;
	t.push_back(k);
      }
      v.push_back(t);
    }

    for(int i=0; i<n; i++) {
      int sum=0;
      for(int j=0; j<n; j++) {
	sum += v[i][j];
      }
      v[i].push_back(sum);
    }

    vector<int> o;
    for(int i=0; i<n+1; i++) {
      int sum=0;
      for(int j=0; j<v.size(); j++) {
	sum += v[j][i];
      }
      o.push_back(sum);
    }

    v.push_back(o);

    for(int i=0; i<v.size(); i++) {
      for(int j=0; j<v[i].size(); j++) {
	cout.width(5);
	cout<<v[i][j];
      }
      cout<<endl;
    }

  }

}