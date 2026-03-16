#include<iostream>

using namespace std;

int main(void){
	int hisi,chouhoukei,length[3];
	hisi=chouhoukei=0;
	while(scanf("%d,%d,%d",&length[0],&length[1],&length[2])!=EOF){
		
		
		
		if(length[0]==length[1]){
			hisi++;
		}
		else if(length[0]*length[0]+length[1]*length[1]==length[2]*length[2]){
			chouhoukei++;
		}
	}
	cout<<chouhoukei<<endl<<hisi<<endl;
}