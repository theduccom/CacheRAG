#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
	int d;
	while(cin>>d&&d){
		int *MAX_p,*MAX_d,zero_d=0,zero_p=0;
		{//init
			MAX_p=&zero_p;MAX_d=&zero_d;
		}
		for(int p,d1,d2;d--;){
			cin>>p>>d1>>d2;
			if(*MAX_d<d1+d2){
				*MAX_d=d1+d2;
				*MAX_p=p;
			}
		}
		cout<<*MAX_p<<" "<<*MAX_d<<endl;
	}
}