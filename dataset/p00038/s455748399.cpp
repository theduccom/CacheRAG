#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

const string ans[7]={"null","one pair","two pair","three card","straight","full house","four card"};

int main(void){
		int a[5];
	while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF){
		int cnt[13]={},ans_num=0,tmp=0;
		for(int i=0;i<5;++i) ++cnt[a[i]-1];
		for(int i=-1,count=0;i<13+1;++i){
			if(cnt[(i+13)%13]>1)break;
			if(cnt[(i+13)%13]==1)++count;
			if(cnt[(i+13)%13]==0)count=0;
			if(count==5) ans_num=4;
		}
		if(!ans_num){
			for(int i=0;i<13;++i){
				if(cnt[i]==4){ans_num=6;break;}
				if(cnt[i]==3)tmp+=3;
				if(cnt[i]==2)tmp+=2;
			}
			if(tmp==5)ans_num=5;
			if(tmp==4)ans_num=2;
			if(tmp==3)ans_num=3;
			if(tmp==2)ans_num=1;
		}
		cout<<ans[ans_num]<<endl;
	}
	return 0;
}