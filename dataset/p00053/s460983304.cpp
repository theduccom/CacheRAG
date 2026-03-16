#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n && n){
		int sum = 2;
		int cnt = 1;
		bool flag = true;
		for(int i=3;;i+=2){
			if(cnt == n){
				cout<<sum<<endl;
				break;
			}
			for(int j=2;j*j<=i;j++){
				if(i % j==0){
					flag = false;
					break;
				}
			}
			if(flag){
				sum += i;
				cnt++;
			}
			flag = true;
		}
	}
	return 0;
}