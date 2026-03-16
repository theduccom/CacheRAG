#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#define p(n) pow(n,2)
using namespace std;
int main(){
  int n,a,b;
  vector<int> v;
  bool f;
  v.push_back(2);
  for(int i=3;i<=50000;i+=2){
    f = true;
    for(int j=0;pow(v[j],2)<=i;j++){
	if(!(i%v[j])){f=false;break;}
    }
    if(f)v.push_back(i);
  }
  v.push_back(50021);
  while(cin>>n){
    if(cin.eof())return 0;
    vector<int>::iterator it = v.begin();
    while(it!=v.end()){
      if(n<*it){
	a=(n==*(it-1))?*(it-2):*(it-1);
	b=*it;
	cout<<a<<" "<<b<<endl;
	break;
      }
      it++;
    }
  }
}