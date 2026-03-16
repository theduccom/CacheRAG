#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n){
		int na, nb;
		bool flag = true;
		for(int i=n-1;;i--){
			for(int j=2;j*j<=i;j++){
				if(i % j == 0){
				flag = false;
				break;
				}
			}
			if(flag){
			na = i;
			break;
			}
			flag = true;
		}
		
		flag = true;
		for(int i=n+1;;i++){
			for(int j=2;j*j<=i;j++){
				if(i % j==0){
					flag = false;
					break;
				}
			}
			if(flag){
				nb = i;
				break;
			}
			flag = true;
		}
		
		cout<<na<<' '<<nb<<endl;
	}
	return 0;
}