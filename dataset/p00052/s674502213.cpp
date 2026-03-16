#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(1){
		int ans=0;
		cin>>n;
		if(n==0)break;
		for(int i=1;i<=n;i++){
			if(i%5==0){
				int tmp=i;
				while(1){
					if(tmp%5==0){
						ans++;
						tmp/=5;
					}else break;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}