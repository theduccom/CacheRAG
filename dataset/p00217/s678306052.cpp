#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;
typedef pair<int,int> P;

bool cmp(const P &p,const P &q){
  return p.second > q.second;
}

int main(){
  int n,id,s1,s2;
  vector<P> patient;
  while(cin >> n && n){
    patient.clear();
    for(int i=0;i<n;i++){
      cin >> id >> s1 >> s2;
      patient.push_back(P(id,s1+s2));
    }
    sort(patient.begin(),patient.end(),cmp);
    cout << patient[0].first << " " << patient[0].second << endl;

  }
  return 0;
}