#include <iostream>
#define MIN(a,b) ((a>b)?(b):(a))

using namespace std;

int main(void){
	int a=0,b=0;
	int n;
	while(cin>>n,n){
		a=b=0;
		for(int i=2;i<=n;i++){
			int j=i;
			while(j%2==0){
				a++;
				j/=2;
			}
			while(j%5==0){
				b++;
				j/=5;
			}
		}
		cout<<MIN(a,b)<<endl;
	}
	return 0;
}