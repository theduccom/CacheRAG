#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int from,to;
	bool first=true;
	while(cin>>from>>to&&!(from==0&&to==0)){
		bool f=false;
		if(first){
			first=false;
		}
		else
			cout<<endl;

		for(int i = from; i <= to; i++){
			if(i%4==0&&i%100!=0){
				f=true;
				cout<<i<<endl;
			}
			else if(i%400==0){
				f=true;
				cout<<i<<endl;
			}
		}
		if(!f){
			cout<<"NA"<<endl;
		}
	}


	return 0;
}