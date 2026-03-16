#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	int n,k;
	vector<int> ice(10);
	while(1){
		cin >> n;
		if(n==0) break;
		for(int i=0;i<10;i++) ice[i]=0;
		for(int i=0;i<n;i++){
			cin >> k;
			ice[k]+=1;
		}
		for(int i=0;i<10;i++){
			if(ice[i]==0) cout << "-" << endl;
			else{
				for(int j=0;j<ice[i];j++) cout << "*";
				cout << endl;
			}
		}
		ice.clear();
	}
	return 0;
}