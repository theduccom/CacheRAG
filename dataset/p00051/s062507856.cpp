#include <iostream>
#include <cstring>
#include <algorithm>
#include <sstream>
using namespace std;

int toInt(const char *s){
	stringstream ss;int x;
	ss<<s;
	ss>>x;
	return x;
}

int main(void){
  int n,a,b;
  string num;
  cin>>n;
  while(n--){
  	char *s=(char *)malloc(9*sizeof(char));
  	cin>>num;
  	while(num.size()!=8) num="0"+num;
  	s=strcpy(s,num.c_str());
  	sort(s,s+8);
  	a=toInt(s);
  	sort(s,s+8,greater<char>());
  	b=toInt(s);
  	cout<<b-a<<endl;
  	free(s);
  }
  return 0;
}