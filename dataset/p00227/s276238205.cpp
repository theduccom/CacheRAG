#include <iostream>
using namespace std;
int main(){
	int n,m;
	int vegetable[10001];
	while(cin>>n>>m){
		if(n+m==0)break;
		for(int i=0 ; i<n ; i++ )
			cin>>vegetable[i];
		//sort__
		for(int i=0 ; i<n ; i++ ){
			for(int j=i+1 ; j<n ; j++ ){
				if( vegetable[i] < vegetable[j] ){
					int tmp=vegetable[i];
					vegetable[i]=vegetable[j];
					vegetable[j]=tmp;
				}
			}
		}
		//_sort.
		int x=n/m;
		int y=n%m;
		int sum=0;
		int tmp;
		for(int i=n-y ; i<n ; i++ )
			sum+=vegetable[i];
		for(int i=0 ; i<n-y ; i++ ){
			if((i+1)%m){
				sum+=vegetable[i];
			}
		}
		cout<< sum << endl;
	}
}