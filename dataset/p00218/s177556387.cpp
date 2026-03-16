#include<iostream>

using namespace std;

int main()
{
	int n;
	int i;
	char rank[10000];
	
	for(;;)
	{
		cin >> n ;
		if(n==0)
			break;
		
		int ans1,ans2=0;
		for(i=0;i<n;i++)
		{
			int pm,pe,pj;
			int hei;
			cin >> pm >> pe >> pj ;
			hei = (pe+pj+pm)/3;
			if(pm==100||pe==100||pj==100){
				rank[i] ='A';
			}
			else
			if((pe+pm)/2>=90){
				rank[i] ='A';
			}else
			if(hei>=80){
				rank[i] = 'A';
			}else
			if(hei>=70){
				rank[i] = 'B';
			}else
			if(hei>=50&&(pe>=80||pm>=80)){
				rank[i] = 'B';
			}else rank[i] = 'C';
		}
		for(i=0;i<n;i++){
			cout << rank[i] << endl;
		}
	}
}