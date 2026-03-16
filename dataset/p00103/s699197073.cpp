#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	int n;
	cin>>n;
	while(n){
		int b[4]={0};
		int ten=0;
		int cint=0;
		while(cint!=3){
			cin>>a;
			if(a=="HIT"){
				for(int i=2;i>=0;i--){
						b[i+1]=b[i];
					}
					b[0]=1;
					if(b[3]==1){
						b[3]=0;
						ten++;
					}
			}
			if(a=="HOMERUN"){
				ten++;
				for(int i=0;i<3;i++){
					if(b[i]==1){
						ten++;
					}
					b[i]=0;
				}
			}
			if(a=="OUT"){
				cint++;
			}
		}
		cout<<ten<<endl;
		n--;
	}
}