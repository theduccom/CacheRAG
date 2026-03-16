#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int ary[20],te[5],num[10];
int main(){
	while(scanf("%d,%d,%d,%d,%d",&te[0],&te[1],&te[2],&te[3],&te[4])>0){
		fill(ary,ary+20,0);
		fill(num,num+10,0);
		for(int i=0;i<5;i++) ary[te[i]]++;
		for(int i=1;i<=13;i++) num[ary[i]]++;
		bool isstt=false;
		for(int i=1;i<10;i++){
			bool fla=true;
			for(int j=0;j<5;j++){
				if(ary[i+j]!=1){
					fla=false;
					break;
				}
			}
			if(fla) isstt=true;
		}
		if((!isstt)&&ary[1]==1&&ary[10]==1&&ary[11]==1&&ary[12]==1&&ary[13]==1) isstt=true;
		if(num[4]>0) cout<<"four card"<<endl;
		else if(num[3]>0&&num[2]>0) cout<<"full house"<<endl;
		else if(isstt) cout<<"straight"<<endl;
		else if(num[3]>0) cout<<"three card"<<endl;
		else if(num[2]>1) cout<<"two pair"<<endl;
		else if(num[2]>0) cout<<"one pair"<<endl;
		else cout<<"null"<<endl;
	}
	return 0;
}