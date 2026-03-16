#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
	char a[1000]={0},b[1000]={0};
	int n,flag,count1,count2,count3,daisyo=0,miss=0;
	cin>>n;

	for (int i=0; i<n; i++) 
	{
		flag=0;
		daisyo=0;
		miss=0;

		cin>>a>>b;
		count1= strlen(a);
		count2= strlen(b);
		
		if (count1>80||count2>80) {
			flag=1;
		}
		count3=count1-count2;
		
		if(count2>count1)
		{
			count3*=-1;
			daisyo=1;
		}
		
		if(daisyo==0)
		{
			if(!(count1==count2))
			for(int j=0;j<=count2;j++)
			{
				b[count2-j+count3]=b[count2-j];
			}
			for (int j=0; j<count3; j++) {
				b[j]='0';
			}
			
			for (int j=1; j<=count1; j++) {
				a[count1-j]+=b[count1-j]-48;
				if (((int)a[count1-j])-48>9) 
				{
					if (j>=80) {
						flag=1;
						break;
					}
					a[count1-j]=(a[count1-j]-48)%10+48;
					if ((count1-j)==0) {
						miss=1;
					}
					else {
							a[count1-j-1]=a[count1-j-1]+1;

						
					}
				}
			}
		}
		
		else
		{
			for(int j=0;j<=count1;j++)
			{
				a[count1-j+count3]=a[count1-j];
			}
			for (int j=0; j<count3; j++) {
				a[j]='0';
			}
			
			for (int j=1; j<=count2; j++) {
				b[count2-j]+=a[count2-j]-48;
				if (((int)b[count2-j]-48)>9) 
				{
					if (j>=80) {
						flag=1;
						break;
					}
					b[count2-j]=(b[count2-j]-48)%10+48;
					if ((count2-j)==0) {
						miss=1;
					}
					else {
						b[count2-j-1]=b[count2-j-1]+1;
					}
				}
			}
		}
		
		if(flag==1)
		{
			cout << "overflow" << endl;
		}
		
		else 
		{
			if (miss==1) {
				cout << '1';
			}
			if(daisyo==0) 
			{
				for (int j=0; j<count1; j++) 
				{
					cout << (int)a[j]-48;
				}
			}
			
			else 
			{
				for (int j=0; j<count2; j++) 
				{
					cout << (int)b[j]-48;
				}
			}
			cout << endl;

		}
		
		
	}
		
		
	
	return (0);
}