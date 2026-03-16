#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n,n!=-1){
		int sum=0;
		while(n>10){
			if(30<n){n--;sum+=160;}
			else if(20<n){sum+=140;n--;}
			else if(10<=n){sum+=125;n--;}
			//cout<<n<<" "<<sum<<endl;
		}
		sum+=1150;
		cout<<4280-sum<<endl;
	}

}