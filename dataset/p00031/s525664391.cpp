#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int weight[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	int gram;
	vector<int> ans;
	while(cin>>gram){
		for(int i=9;i>=0;i--){
			if(gram >= weight[i]){
				ans.push_back(i);
				gram -= weight[i];
			}
		}
		
		for(int i=ans.size()-1;i>=0;i--){
			cout<<weight[ ans[i] ];
			if(i != 0) cout<<' ';
		}
		cout<<endl;  
		ans.clear();
	}
	return 0;
}