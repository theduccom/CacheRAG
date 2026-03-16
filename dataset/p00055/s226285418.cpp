#include<iostream>
using namespace std;

int main(void){
	double num;
	while(cin >> num){
		double ans=num;
		for(int i=2;i<=10;i++){
			if(i%2==0)num=(double)num*2;
			else num=(double)num/3;
			ans+=num;
		}
		printf("%0.10f\n",ans);
	}
    return 0;
}