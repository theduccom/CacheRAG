#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs(a-b) < EPS)

int main(){


	int l[10];
	int station[11];
	char cm;
	while(cin>>l[0]>>cm>>l[1]>>cm>>l[2]>>cm>>l[3]>>cm>>l[4]>>cm>>l[5]>>cm>>l[6]>>cm>>l[7]>>cm>>l[8]>>cm>>l[9]){
		int sumlength=0;
		for(int i = 0; i < 10; i++)
			sumlength+=l[i];
		station[0]=0;
		for(int i = 1; i < 11; i++){
			station[i]=station[i-1]+l[i-1];
		}
		int v1,v2;
		cin>>cm;
		cin>>v1>>cm>>v2;
		double t = (double)(sumlength)/(v1+v2);
		double place=t*v1;
		for(int i = 0; i < 11; i++){
			if(EQ(station[i],(place))){
				cout<<i<<endl;
				break;
			}
			else if(station[i]<(place) && station[i+1] >(place)){
				cout<<i+1<<endl;
				break;
			}
		}
	}

	return 0;
}