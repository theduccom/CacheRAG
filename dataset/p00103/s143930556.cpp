#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int n;
	string str;
	cin>>n;
	while(n>0){
		int base[4]={0};
		int o=0;
		while(o!=3){
		cin>>str;
		if(str=="HIT"){
			for(int i=3;i>0;i--){
				base[i]+=base[i-1];
				base[i-1]=0;
		}
			base[0]=1;
		}
			else if(str=="HOMERUN"){
				int k=1;
				for(int i=0;i<3;i++){
			if(base[i]==1)
				k++;
				base[i]=0;
				}
				base[3]+=k;
		}
			else if(str=="OUT")
				o++;
	}
		cout<<base[3]<<endl;
		n--;
	}
}