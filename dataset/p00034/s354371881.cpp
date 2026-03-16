//AOJ 0034

#include<iostream>

using namespace std;

int main(){

	int l[10];
	int v[2];
	char tmp;
	int sum;
	double x;

	while(cin>>l[0]){
		cin>>tmp;
		for(int i=1;i<10;i++){
			cin>>l[i];
			cin>>tmp;
		}
		cin>>v[0];
		cin>>tmp;
		cin>>v[1];

		sum = 0;
		for(int i=0;i<10;i++){
			sum+=l[i];
		}
		x = sum * v[0]/(v[0]+v[1]);

		sum = 0;
		int cnt = 0;
		for(int i=0;i<10;i++){
			sum+=l[i];
			cnt++;
			if(sum>=x){
				cout<<cnt<<endl;
				break;
			}
		}
	}
	return 0;
}