#include<iostream>
#include<ios>
#include<algorithm>
using namespace std;
int a[5];
main()
{
	while(~scanf("%d,%d,%d,%d,%d",a,a+1,a+2,a+3,a+4))
	{
		sort(a,a+5);
		if(a[1]==a[4]||a[0]==a[3])cout<<"four card"<<endl;
		else if(a[0]==a[1]&&a[2]==a[4]||a[0]==a[2]&&a[3]==a[4])cout<<"full house"<<endl;
		else if((a[0]+1==a[1]||a[0]+9==a[1])&&a[1]+1==a[2]&&a[2]+1==a[3]&&a[3]+1==a[4])
			cout<<"straight"<<endl;
		else if(a[0]==a[2]||a[1]==a[3]||a[2]==a[4])cout<<"three card"<<endl;
		else if(a[0]==a[1]&&(a[2]==a[3]||a[3]==a[4])||a[1]==a[2]&&a[3]==a[4])cout<<"two pair"<<endl;
		else if(a[0]==a[1]||a[1]==a[2]||a[2]==a[3]||a[3]==a[4])cout<<"one pair"<<endl;
		else cout<<"null"<<endl;
	}
}

