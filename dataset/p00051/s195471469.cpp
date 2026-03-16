#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		int cnt[8];
		for(int j=0;j<8;j++){
			cnt[j]=0;
		}
		int cnt0=0;
		cin >> cnt0;
		cnt[0]=cnt0/10000000;
		cnt0=cnt0-cnt[0]*10000000;
		cnt[1]=cnt0/1000000;
		cnt0=cnt0-cnt[1]*1000000;
		cnt[2]=cnt0/100000;
		cnt0=cnt0-cnt[2]*100000;
		cnt[3]=cnt0/10000;
		cnt0=cnt0-cnt[3]*10000;
		cnt[4]=cnt0/1000;
		cnt0=cnt0-cnt[4]*1000;
		cnt[5]=cnt0/100;
		cnt0=cnt0-cnt[5]*100;
		cnt[6]=cnt0/10;
		cnt0=cnt0-cnt[6]*10;
		cnt[7]=cnt0;				//配列に格納
		sort(cnt,cnt+8);			//ソート
		int cntH,cntL;
		cntH=0;cntL=0;
		cntH=cnt[0];
		cntH=cnt[1]*10+cntH;
		cntH=cnt[2]*100+cntH;
		cntH=cnt[3]*1000+cntH;
		cntH=cnt[4]*10000+cntH;
		cntH=cnt[5]*100000+cntH;
		cntH=cnt[6]*1000000+cntH;
		cntH=cnt[7]*10000000+cntH;

		cntL=cnt[7];
		cntL=cnt[6]*10+cntL;
		cntL=cnt[5]*100+cntL;
		cntL=cnt[4]*1000+cntL;
		cntL=cnt[3]*10000+cntL;
		cntL=cnt[2]*100000+cntL;
		cntL=cnt[1]*1000000+cntL;
		cntL=cnt[0]*10000000+cntL;
		cout << cntH-cntL<<endl;
	}
}