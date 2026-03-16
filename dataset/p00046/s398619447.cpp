#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  double a;
  vector<double> vb;
  while(cin>>a)
    vb.push_back(a);
  sort(vb.begin(),vb.end());
  cout<<-vb[0]+vb[vb.size()-1]<<endl;
  return 0;
}