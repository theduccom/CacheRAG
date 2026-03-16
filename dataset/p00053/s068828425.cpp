#include<iostream>
#include<string>
using namespace std;
int b[10010];
int main(){
    long long i,s,n;
	i=2;
	int count=0;
	while(true){
		bool t=false;
		for(int j=2;j*j<=i;j++){
			if(i%j==0)
				t=true;
		}
		if(t==false){
			count++;
			b[count]=i;
		}
		if(count==10010)
			break;
		i++;
	}
	while(true){
		s=0;
		cin>>n;
		if(n==0)
			break;
		for(int i=0;i<=n;i++){
			s+=b[i];
		}
		cout<<s<<endl;
	}
	return 0;
}