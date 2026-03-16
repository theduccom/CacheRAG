#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int a[5];
	while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF){
		map<int,int> count;
		sort(a,a+5);
		for(int i=0;i<5;i++){
			count[a[i]]++;
		}
		int times[13],times2[13];
		for(int i=1;i<=13;i++)
			times2[i-1]=count[i];
		sort(times2,times2+13);
		for(int i=0;i<13;i++)
			times[i]=times2[12-i];
		if(times[0]==4) cout << "four card" << endl;
		else if(times[0]==3 && times[1]==2) cout << "full house" << endl;
		else if( (a[1]==a[0]+1 &&a[2]==a[1]+1 &&a[3]==a[2]+1 &&a[4]==a[3]+1) || 
			(a[0]==1 && a[1]==10 && a[2]==a[1]+1 &&a[3]==a[2]+1 &&a[4]==a[3]+1) ) cout << "straight" <<endl;
		else if(times[0]==3 ) cout << "three card" << endl;
		else if(times[0]==2 && times[1]==2) cout << "two pair" << endl;
		else if(times[0]==2) cout << "one pair" << endl;
		else cout << "null" << endl;
	}


	return 0;
}