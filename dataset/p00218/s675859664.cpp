#include <iostream>
using namespace std;

int twoave(int a,int b)
{
	return (a+b)/2;
}
int theave(int a,int b,int c)
{
	return (a+b+c)/3;
}

int main()
{
	int n,pm,pe,pj;
	while(cin >> n){
		if(n==0)
			break;
		for(int i=0;i<n;i++){
			cin >> pm >> pe >> pj;
			if(pm==100 || pe==100 || pj==100)
				cout << 'A' << endl;
			else if(twoave(pm,pe)>=90)
				cout << 'A' << endl;
			else if(theave(pm,pe,pj)>=80)
				cout << 'A' << endl;
			else if(theave(pm,pe,pj)>=70)
				cout << 'B' << endl;
			else if(theave(pm,pe,pj)>=50 && (pm>=80 || pe>=80))
				cout << 'B' << endl;
			else
				cout << 'C' << endl;
		}
	}
	return 0;
}