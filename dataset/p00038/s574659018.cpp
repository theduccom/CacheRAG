#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,d,e;
	while(scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e)!=EOF)
	{
		int cards[13]={0};
		int dbl=0,thr=0,four=0,straight=0,tmp=0;
		cards[a-1]++; cards[b-1]++; cards[c-1]++; cards[d-1]++; cards[e-1]++;

		for(int i = 0; i < 13; ++i)
		{
			if(cards[i]==2) dbl++;
			else if(cards[i]==3) thr++;
			else if(cards[i]==4) four++;

			if(0<i&&cards[i]==1&&cards[i-1]==1) tmp++;
			straight=max(tmp,straight);
		}

		if(four) cout<<"four card"<<endl;
		else if(thr&&dbl) cout<<"full house"<<endl;
		else if(straight==4||cards[0]==1&&cards[9]==1&&cards[10]==1&&cards[11]==1&&cards[12]==1) cout<<"straight"<<endl;
		else if(thr) cout<<"three card"<<endl;
		else if(dbl==2) cout<<"two pair"<<endl;
		else if(dbl) cout<<"one pair"<<endl;
		else cout<<"null"<<endl;
	}
  return 0;
}