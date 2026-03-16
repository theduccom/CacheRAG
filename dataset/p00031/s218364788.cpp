#include<iostream>
#include<vector>
using namespace std;
int main(){
	int weight;
	int n[10];
	int arr[10];
	vector<int> ans;

	for(int i=0,j=1;j<=512;j*=2){
		arr[i++]=j;
	}
	while(cin>>weight){
		ans.clear();
		for(int i=9;i>-1;i--){
			if(weight<=1){
				if(weight==1){
					ans.push_back(weight);
					break;
				}
			}else if(weight>=arr[i]){
				weight-=arr[i];
				ans.push_back(arr[i]);
			}
		}
		for(int i=ans.size()-1;i>-1;i--){
			cout<<ans[i];
			(i==0)? cout<<endl:cout<<" "; 
		}
	}
	return 0;
}