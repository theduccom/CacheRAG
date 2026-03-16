#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		vector<int> max,min,an;
		cin>>str;
		sort(str.begin(),str.end());
		for(int j=0;j<str.length();j++){
			min.push_back(str[j]-48);
			max.push_back(str[str.length()-1-j]-48);
		}
		for(int k=0;k<max.size();k++){
			if(min[min.size()-1-k]>max[max.size()-k-1]){
				max[max.size()-1-k] += 10;
				max[max.size()-2-k]--;
			}
			an.push_back(max[max.size()-1-k]-min[min.size()-1-k]);
		}
		for(int p=0;p<an.size();p++){
			if(an[an.size()-1-p]==0){
				if(p==an.size()-1) cout<<"0";
				continue;
			}else{
				for(int q=p;q<an.size();q++){
					cout<<an[an.size()-1-q];
				}
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}