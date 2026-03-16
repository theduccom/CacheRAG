
#include <iostream>
#include <iomanip>
using namespace std;

struct point{double px; double py;};

double x, y, s;
int i,j;

int main(){
	point p[21];	
	char k;

	while(cin>>x>>k>>y){
		if(cin.eof())break;
		p[i].px = x;
		p[i].py = y;
		i++;
	}
	p[i].px = p[0].px;
	p[i].py = p[0].py;

	for(; j<i; j++)	s += (p[j].px-p[j+1].px)*(p[j].py+p[j+1].py);

	cout<<setiosflags(ios::fixed)<<setprecision(6)<<s/2<<"\n";
	return 0;
}