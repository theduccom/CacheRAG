#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  int a,b,c,n;
  double tmp, limit;
  
  while(cin >> a >> b >> c){
	if((a|b|c) == 0) break;
	vector<int> v;
	v.push_back(a);	v.push_back(b);	v.push_back(c);
	sort(v.begin(),v.end());
	limit = sqrt(v[0]*v[0]+v[1]*v[1])/2;
	cin >> n;
	for(int i=0;i<n;i++){
	  cin >> tmp;
	  if(tmp > limit){
		cout << "OK" << endl;
	  }else{
		cout << "NA" << endl;
	  }
	}
  }
}