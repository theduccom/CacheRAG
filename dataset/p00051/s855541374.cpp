#include<iostream>
#include<algorithm>
#include<string>
#include <vector>

using namespace std;

int main(){

	int n,min,max;
	char in[8];

	cin>>n;

	for(int i=0;i<n;i++){
		cin>>in;
		sort(in,in+8);
		min=atoi(in);
		sort(in,in+8,greater<int>());
		max=atoi(in);
		cout<<max-min<<endl;
	}
}