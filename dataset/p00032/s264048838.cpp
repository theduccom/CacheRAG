#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int tyou=0,hisi=0;
	char damy;
	int side[3];
	while(cin>>side[0]>>damy>>side[1]>>damy>>side[2]){
		if(side[0]==side[1]){
			++hisi;
			continue;
		}else if(pow((double)side[0],2)+pow((double)side[1],2)==pow((double)side[2],2))++tyou;
	}
	cout<<tyou<<endl<<hisi<<endl;
	return 0;
}