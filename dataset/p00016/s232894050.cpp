#include <iostream> 
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
	int x,m,r=90;
	double ansX=0,ansY=0;
	char com;
	while(1){
		cin>>m>>com>>x;
		if(m==0&&x==0)break;
		ansX+=m*cos(3.1415*r/180);
		ansY+=m*sin(3.1415*r/180);
		r-=x;
	}
	cout<<(int)ansX<<endl<<(int)ansY<<endl;
    return 0;
}