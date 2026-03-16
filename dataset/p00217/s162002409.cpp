#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

	int n;
	int p,d1,d2;
	int max_n,max_i;

	while(1){

		cin>>n;
		if(n==0) break;

		max_i=-1;
		max_n=-1;

		for(int i=0;i<n;i++){
			cin>>p>>d1>>d2;
			if(d1+d2>max_n){
				max_n=d1+d2;
				max_i=p;
			}
		}

		cout<<max_i<<" "<<max_n<<endl;
	}

}