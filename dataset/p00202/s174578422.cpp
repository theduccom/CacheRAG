#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> prim(1000000+1);
	fill(prim.begin(),prim.end(),1);
	prim[0]=0;
	prim[1]=0;
	for(int i=2;i<prim.size();i++){
		if( prim[i]!=0 ){
			int x=i+i;
			while(x<prim.size()){
				prim[x]=0;
				x+=i;
			}
		}
	}

	while(true)
	{
		int N,X;
		cin >> N >> X;
		if(N==0 && X==0)break;
		
		vector<int> food;
		for(int i=0;i<N;i++){
			int m;
			cin >> m;
			food.push_back(m);
		}
		
		vector<int> num(X+1);
		fill(num.begin(),num.end(),0);
		for(int i=0;i<N;i++){
			if( food[i]<=X ){
				num[ food[i] ]=1;
			}
		}
		for(int i=0;i<=X;i++){
			if( num[i]!=0){
				for(int j=0;j<N;j++){
					if( i+food[j]<=X){
						num[i+food[j]]=1;
					}
				}
			}
		}
		int ans=-1;
		for(int x=X;x>=0;x--){
			if( prim[x]==1 && num[x]!=0){
				ans = x;
				break;
			}			
		}
		if(ans>0){
			cout << ans << endl;
		}else{
			cout << "NA" << endl;
		}
	}
	


	return 0;
}