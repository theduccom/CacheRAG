#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int n;
	int ret[8];
	cin>>n;
	while(n-- > 0){
		string s;
		cin>>s;
		for(int i=0;i<8;i++) ret[i] = s[i] - '0';
		int Min=0, Max=0;
		sort(ret, ret+8);
		for(int i=0;i<8;i++){
			Max += pow(10, i)*ret[i];
		}
		
		for(int i=7;i>=0;i--){
			Min +=  pow(10,i)*ret[7-i];
		}
		int differential = Max - Min;
		
		cout<<differential<<endl;
	}
	return 0;
}