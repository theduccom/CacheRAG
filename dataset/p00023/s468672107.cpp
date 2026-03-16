#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double x1,x2,y1,y2,r1,r2,d;
	int n,i;
	
	cin >> n ;
	
	for(i=0;i<n;i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2 ;
		
		d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		
		if(d-r1-r2>0.0)
			cout << "0" << endl;
		else if(r1-d-r2>0.0)
			cout << "2" << endl;
		else if(r2-d-r1>0.0)
			cout << "-2" << endl;
		else
			cout << "1" << endl;
	}
}
	