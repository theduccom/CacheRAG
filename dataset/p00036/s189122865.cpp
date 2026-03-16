#include<iostream>
using namespace std;
typedef unsigned long long ull;
int main(){
	int shape[7]={0x0303,0x01010101,0x0f,
		0x010302,0x0603,0x020301,0x0306};
	char c;
	int ans;
	while(cin>>c){
		ull mass=c-'0';	
		for(int i=1;i<64;i++){
			cin>>c;
			if(c=='1')mass |= (ull)1<<i; 
		}
		for(int i=0;i<64;i++){
			for(int j=0;j<7;j++){
				if((mass>>i&shape[j])==shape[j])ans=j;
			}
		}
		cout<<(char)(ans+'A')<<endl;
	}
	return 0;
}