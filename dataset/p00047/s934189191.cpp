#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	char from,to,cm;
	int num[200];
	fill(num,num+200,0);
	num['A']=1;
	while(cin>>from>>cm>>to){
		swap(num[from],num[to]);
	}
	if(num['A']){
		cout<<"A"<<endl;
	}
	else if(num['B']){
		cout<<"B"<<endl;
	}
	else
		cout<<"C"<<endl;

	return 0;
}