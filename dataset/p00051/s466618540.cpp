#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,m,high,low;
	cin>>n;
	for(int i=0;i<n;i++){
		vector <int> data;
		high=0;low=0;
		cin>>m;
		int k=10000000;
		for(int j=0;j<8;j++){
			int num=m/k%10;
			data.push_back(num);
			k/=10;
		}
		sort(data.begin(),data.end());
		k=1;
		for(int j=0;j<8;j++){
			high+=k*data[j];
			low+=k*data[7-j];
			k*=10;
		}
		cout<<high-low<<endl;
	}
}