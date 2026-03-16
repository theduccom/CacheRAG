#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string a,b;
	vector<int> ans;
	int n,tmp,carry,num;
	bool flag = true;
	cin >> n;
	
	for(int i=0; i<n; i++){
		ans.clear();
		cin >> a >> b;
		int ai = a.size()-1;
		int bi = b.size()-1;
		
		if(ai < 0 && bi < 0 && carry==0){
			cout << "overflow";
			flag = false;
		}
		carry = 0;
		while(ai >= 0 || bi >= 0){
			tmp=0;
			if(ai >= 0) tmp += (a[ai] - '0');
			if(bi >= 0) tmp += (b[bi] - '0');
			ans.push_back((tmp+carry)%10);
			carry = (tmp+carry)/10;
			ai--; bi--;
		}
		
		if(carry != 0) ans.push_back(carry);
		
		if(flag == true){
		
			if(ans.size() > 80){
				cout << "overflow";
				//flag = false;
			}
		
			else{
				for(int j=ans.size()-1; j>=0; j--)
					cout << ans[j];
			}
			
		}
		
	cout << endl;
	
	}
	
	return 0;
}