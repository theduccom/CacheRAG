#include<iostream>

using namespace std;

typedef struct{
	int num;
	int len;
}kanzya;

int main(void){
	std::ios_base::sync_with_stdio();

	int n;
	int p,d1,d2;
	kanzya data;

	while(1){
		cin>>n;
		if(n==0) break;
		cin>>p>>d1>>d2;
		data.num=p;
		data.len=d1+d2;
		n--;
		while(n--){
			cin>>p>>d1>>d2;
			if(data.len<d1+d2){
				data.num=p;
				data.len=d1+d2;
			}
		}
		cout<<data.num<<" "<<data.len<<endl;
	}

	return 0;
}