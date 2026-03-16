#include <iostream>
using namespace std;
char judge(int a,int b,int c)
{
	if(a==100||b==100||c==100)return 'A';
	if(a+b>=180)return 'A';
	if(a+b+c>=240)return 'A';
	if(a+b+c>=210)return 'B';
	if((a+b+c>=150)&&(a>=80||b>=80))return 'B';
	return 'C';
}
int main()
{
	while(1)
	{
		int n;
		cin >> n;
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			int a,b,c;
			cin >> a >> b >> c;
			cout << judge(a,b,c) << endl;
		}
	}
	return 0;
}