#include<cstdio>
#include<iostream>

using namespace std;

bool isStraight(int xcard[5][2])
{
	if(xcard[0][0]==1&&xcard[1][0]==10&&xcard[2][0]==11&&xcard[3][0]==12&&xcard[4][0]==13)	return true;
	bool b=true;
	for(int i=0;i<4;i++)b&=(xcard[i+1][0]-xcard[i][0]==1);
	return b;
}

int main()
{
	int card[5];
	while(~scanf("%d,%d,%d,%d,%d",card,card+1,card+2,card+3,card+4)){
		int xcard[5][2];	// [0]:cardÌ, [1]:[0]Ì
		for(int i=0;i<5;i++)	xcard[i][0]=xcard[i][1]=0;

		int bucket[14]={0};
		for(int i=0;i<5;i++)	bucket[card[i]]++;
		for(int i=1,j=0;i<14;i++)
			if(bucket[i]>0)
				xcard[j][0]=i,xcard[j][1]=bucket[i],j++;

		if(xcard[0][1]==4 || xcard[1][1]==4){
			cout<<"four card"<<endl;
		}
		else if(xcard[0][1]+xcard[1][1]==5){
			cout<<"full house"<<endl;
		}
		else if(isStraight(xcard)){
			cout<<"straight"<<endl;
		}
		else if(xcard[0][1]==3 || xcard[1][1]==3 || xcard[2][1]==3){
			cout<<"three card"<<endl;
		}
		else{
			int numofpair=0;
			for(int i=0;i<5;i++)	numofpair+=(xcard[i][1]==2);
			switch(numofpair){
				case 2:	cout<<"two pair"<<endl;	break;
				case 1:	cout<<"one pair"<<endl;	break;
				case 0:	cout<<"null"<<endl;		break;
			}
		}
	}

	return 0;
}