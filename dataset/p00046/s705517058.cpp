#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <stack>
using namespace std;
int main(){
  double tall;
  vector<double> v;
  while(cin>>tall){
    if(cin.eof())break;
    if(!tall)break;
    v.push_back(tall);
  }
  sort(v.begin(),v.end());
  cout<<v[v.size()-1]-v[0]<<endl;
}