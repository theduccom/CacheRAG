//0015
#include <bits/stdc++.h>
using namespace std;

int main(){
	long n;
	cin>>n;
	while(n--){
		string a,b,ans;
		long tmp = 0,i;
		cin>>a>>b;
		while(a.size() != b.size()){
		if(a.size() > b.size()){
			while(a.size() != b.size()){
				b = '0' + b;
			}
		}

		else if(a.size() < b.size()){
			while(a.size() != b.size()){
				a = '0' + a;
			}
		}
		}

		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());

		for(i = 0;i < a.size()||i < b.size();i++){
			tmp = (int)(a[i] - '0') + (int)(b[i] - '0') + (int)tmp;
			ans = ((char)((tmp % 10)+'0')) + ans;

			tmp /= 10;
		}

		if(tmp != 0)
			ans = '1' + ans;

		if(ans.size() > 80)
			cout<<"overflow"<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}