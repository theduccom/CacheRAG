#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m,x;
	vector<bool> prime(1000001,true);
	prime[0]=prime[1]=false;
	/*ツづ督づゥツつ「*/
	for(int i=2;i<=1000;i++)if(prime[i])for(int j=i+i;j<=1000000;j+=i)prime[j]=0;
	while(cin >> n >> x && n && x){
		vector<int> item(n);
		vector<bool> able(x+1,false);
		able[0]=true;
		
		for(int i=0;i<n;i++)cin >> item[i];
		
		for(int i=0;i<n;i++){
			for(int j=0;j+item[i]<=x;j++){
				able[j+item[i]] = able[j+item[i]] | able[j];
			}
		}
		for(int i=x;i>=0;i--){
			if(able[i] && prime[i]){
				cout << i << endl;
				break;
			}
			if(!i)cout << "NA" << endl;
		}
	}
}