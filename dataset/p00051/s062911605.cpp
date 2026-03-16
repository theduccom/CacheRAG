#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n,a;
	int S[10];
	char s[10];
	
	cin>>n;
	while(n!=0){
		cin>>s;
		for(int i=0;i<8;i++)
			S[i]=s[i]-'0';
		
		int max=0,min=0;
		sort(S,S+8);
		for(int i=0;i<8;i++){
			if(S[7-i]==0){
				if(max!=0)
					max=max*10;
			}
			else
				max=max*10+S[7-i];
			if(S[i]==0){
				if(min!=0)
					min=min*10;
			}
			else min=min*10+S[i];
			}
		cout<<max-min<<endl;
		n--;
	}
		

}