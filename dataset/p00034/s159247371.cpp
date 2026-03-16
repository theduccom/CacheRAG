#include<iostream>

#define loop(i,a,b) for(int i = a; i < b; i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(void){
	int l[10];
	int v[2];
	char tmp;
	double x;
	while(cin>>l[0]){
		cin>>tmp;
		loop(i,1,10)cin>>l[i]>>tmp;
		cin>>v[0]>>tmp>>v[1];
		
		int sum = 0;
		rep(i,10)sum+=l[i];
		
		x = sum * v[0]/(v[0] + v[1]);
		
		sum = 0;
		int cnt=0;
		rep(i,10){
			sum+=l[i];
			cnt++;
			if(sum>=x){
				cout<<cnt<<endl;
				break;
			}		
		}
	}

}