#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){
	string a,b;
	vector<int> ans;
	int n,num,ai,bi,c=0;
	bool flag;

	cin >> n;

	if(n>0&&n<=100){
		for(int i=0;i<n;i++){
			cin >> a >> b;
			flag=false;	

			for(int j=0;j<100;j++){
				num=0;
				ai=a.size()-j-1;
				bi=b.size()-j-1;
				if(ai<0&&bi<0&&c==0) break;
				if(ai>=0) num+=a[ai]-48;
				if(bi>=0) num+=b[bi]-48;
				ans.push_back((num+c)%10);
				if(num+c>=10) c=1;
				else c=0;
			}
			if(ans.size()>80){
				flag=true;
			}
			if(flag){
				cout << "overflow";
			}else{
				for(int j=ans.size()-1;j>=0;--j){
					cout << ans[j];
				}
			}
			cout << endl;
			ans.clear();
		}
	}
	return 0;
}