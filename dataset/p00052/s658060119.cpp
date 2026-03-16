#include<iostream>

using namespace std;

int ruijou(int n);

int main(){
	
	int table[20],num;
	
	//累乗の末尾の0の個数は5がいくつ入っているかで求められる。ｋｗｓｋはggrks
	for(int i=0;i<14;i++){
		table[i]=ruijou(i);
	}
	
	while(cin>>num,num){
		int a=0,sum=0;
		for(int i=0;table[i]<=num;i++){
			a=num/table[i];
			sum=sum+a;
		}
		cout<<sum<<endl;
	}
}

int ruijou(int n){
	int rai=1;
	for(int i=0;i<=n;i++){
		rai=rai*5;
	}
	return rai;
}