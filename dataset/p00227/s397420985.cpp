#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int cnt,hukuro;
	int n,m,yasai[1000],total=0;
	
	while(1){
		cin>>n>>m;
		if(n==0&&m==0)break;
		cnt=0;
		hukuro=n/m;
		for(int i=0;i<n;i++){
			cin>>yasai[i];
		}
		sort(yasai,yasai+n);
		reverse(yasai,yasai+n);
		for(int i=0;i<n;i++){
			if((i+1)%m!=0)total+=yasai[i];
			cnt++;
		}
		
		cout<<total<<endl;
		total=0;
	}
	return 0 ;
}