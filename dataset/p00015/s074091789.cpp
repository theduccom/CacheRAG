#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		string a, b;
		cin>>a>>b;
		int kuri = 0;
		int k = 0;
		string ans = "";
		while(true){
			bool breakflg = true;
			int ai = 0;
			int bi = 0;
			if(int(a.size())-k-1 >= 0){
				ai = a[int(a.size())-k-1] - '0';
				breakflg = false;
			}
			if(int(b.size())-k-1 >= 0){
				bi = b[int(b.size())-k-1] - '0';
				breakflg = false;
			}
			k++;
			int sum = ai + bi + kuri;
			if(!kuri&&breakflg) break;
			if(sum>9){
				kuri = 1;
				sum %= 10;
			} else {
				kuri = 0;
			}
			ans.push_back('0'+sum);
		}
		reverse(ans.begin(), ans.end());
		if(ans.size()>80){
			cout<<"overflow"<<endl;
		} else {
			cout<<ans<<endl;
		}
	}
	return 0;
}