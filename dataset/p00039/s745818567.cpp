#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	string ss;
	while(cin>>ss){
		vector<int> spot;
		for(int i=0;i<ss.size();i++){
			switch(ss[i]){
				case 'I':
					spot.push_back(1);
					break;
				case 'V':
					spot.push_back(5);
					break;
				case 'X':
					spot.push_back(10);
					break;
				case 'L':
					spot.push_back(50);
					break;
				case 'C':
					spot.push_back(100);
					break;
				case 'D':
					spot.push_back(500);
					break;
				case 'M':
					spot.push_back(1000);
					break;
			}
		}
		int ans=0;
		for(int i=0;i<(spot.size()-1);i++){
			if(spot[i]<spot[i+1]){
				spot[i]*=-1;
			}
			ans+=spot[i];
		}
		ans+=spot[spot.size()-1];
		cout<<ans<<endl;
	}
	return 0;
}