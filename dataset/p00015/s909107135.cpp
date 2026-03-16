#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int stoi(char c){
	return c-'0';
}

char itos(int a){
	return a+'0';
}

int main(){
	int n;
	string s1,s2,ans;
	int lmin , lmax , sum , tmp , tmp2;
	cin >> n;
	for(int i=0; i<n ; ++i){
		bool bs1=true;
		cin >> s1 >> s2;
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		lmin=min(s1.length(),s2.length());
		lmax=max(s1.length(),s2.length());
		if(s1.length()<s2.length()) bs1=false;
		for(int j=0;j<lmin;++j){
			ans.resize(j+2 , '0');
			sum=stoi(s1[j])+stoi(s2[j]);
			if(sum>=10){
				ans[j+1]=itos(1);
				tmp=stoi(ans[j]);
				tmp+=sum%10;
				ans[j]=itos(tmp);
			} else {
				int tmp=stoi(ans[j]);
				tmp+=sum;
				if(tmp>=10){
					ans[j+1]=itos(1);
					tmp2=stoi(ans[j]);
					tmp2=tmp%10;
					ans[j]=itos(tmp2);
				} else {
					ans[j]=itos(tmp);
				}
			}
			
		}
		for(int k=lmin; k<lmax ; ++k){
			ans.resize(k+2, '0');
			if(bs1){
				sum=stoi(ans[k])+stoi(s1[k]);
				if(sum>=10){
				ans[k+1]=itos(1); 
				tmp=sum%10;
				ans[k]=itos(tmp);
				} else {
					ans[k]=itos(sum);
				}
			} else {
				sum=stoi(s2[k]);
				sum+=stoi(ans[k]);
				if(sum>=10){
				ans[k+1]=itos(1);
				tmp=sum%10;
				ans[k]=itos(tmp);
				} else {
				ans[k]=itos(sum);
				}
			}
		}
		reverse(ans.begin(),ans.end());
		if(ans[0]=='0') ans.erase(0,1);
		if(ans.length()>80 || s1.length()>80 || s2.length()>80) {cout << "overflow" << endl; ans.clear();}
		else {
			cout << ans << endl;
			ans.clear();
		}
	}
	return 0; 
}