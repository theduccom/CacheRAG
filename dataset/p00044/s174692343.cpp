//エラトステネスのふるいを使う
#include<iostream>
#include<cmath>

using namespace std;

int main(void){
	int i,min,so,low,high;
	double data[60000],max,cnt=0;

	//素数を配列に埋め込む
	for(i=2;i<60000;i++)
		data[i]=1;
	min=2;
	max=60000;
	while(1){
		if(sqrt(max)<min)	break;
		for(i=min;i<max;i++){
			if(i%min==0){
				data[i]=0;
			}
		}
		data[min]=1;
		for(i=min+1;i<60000;i++){
			if(data[i]==1){
				if(cnt==0)	min=i;
				else	max=i;
				cnt=1;
			}
		}
		cnt=0;
	}

	while(cin>>so){
		for(i=2;i<60000;i++){
			if(data[i]==1){
				if(so>i)	low=i;
				if(so<i){
					high=i;
					cnt=1;
				}
			}
			if(cnt==1)	break;
		}
		cout<<low<<' '<<high<<endl;
		cnt=0;
	}

	return 0;
}