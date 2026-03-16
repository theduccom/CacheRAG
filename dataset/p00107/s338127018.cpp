#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
using namespace std;
int main(){
	
	vector<int> s(3);
	int n;
	int r;
	while(cin>>s[0]>>s[1]>>s[2],s[0]!=0&&s[1]!=0&&s[2]!=0){
		sort(s.begin(),s.end());
		double a=sqrt(pow(s[0],2)+pow(s[1],2));
		cin>>n;
		double r;
		for(int i=0;i<n;i++){
			cin>>r;
			if(a<2*r)
				cout<<"OK"<<endl;
			else
				cout<<"NA"<<endl;
		}
	}
}