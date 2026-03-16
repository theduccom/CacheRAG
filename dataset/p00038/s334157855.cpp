#include<iostream>

using namespace std;

int main()
{
	int hand[13];
	int i;
	int a;
	int pair,three,str,four;
	char aa;
	
	for(;cin >> a;)
	{
		for(i=0;i<13;i++)
			hand[i]=0;
		
		hand[a-1]++;
		
		for(i=1;i<5;i++)
		{
			cin >> aa >> a;
			hand[a-1]++;
		}
		
		pair=str=three=four=0;
		
		for(i=0;i<13;i++)
		{
			if(hand[i]==4)
				four=1;
			else if(hand[i]==2)
				pair++;
			else if(hand[i]==3)
				three=1;
			if(i!=12 && hand[i]==1 && hand[i+1]==1)
				str++;
		}
		if(hand[12]==1 && hand[0]==1 && hand[1]!=1)
			str++;
		
		if(str==4)
			cout << "straight" << endl;
		else if(four==1)
			cout << "four card" << endl;
		else if(pair==1 && three==1)
			cout << "full house" << endl;
		else if(three==1)
			cout << "three card" << endl;
		else if(pair==2)
			cout << "two pair" << endl;
		else if(pair==1)
			cout << "one pair" << endl;
		else
		 cout << "null" << endl;
	}
}