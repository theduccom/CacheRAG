#include<iostream>
using namespace std;
int main(){
	int a, b, i;
	bool flg, kaigyo=false;
	while(true){
		cin>>a>>b; if(a==0 && b==0) break;
		flg=false;
		if(kaigyo) cout<<endl;
		for(i=a;i<=b;i++){
			if(i%400 == 0){
				cout<<i<<endl;
				flg=true;
			}else if(i%100 == 0){
			}else if(i%4 == 0){
				cout<<i<<endl;
				flg=true;
			}
		}
		if(flg==false) cout<<"NA\n";
		kaigyo = true;
	}
	return 0;
}