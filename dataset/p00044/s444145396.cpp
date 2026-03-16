#include<iostream>
#include<cmath>
#define NUM 100000
using namespace std;
int p[NUM];

int main(){
	int i,j;
	p[0]=0;//ツ素ツ青板テツーツブツδ仰づーツ催ャツづゥ
	p[1]=0;
	for(i=2;i<NUM;i++)p[i]=1;
	for(i=2;i<sqrt(NUM);i++){
		if(p[i]){
			for(j=i*2;j<NUM;j+=i){
				p[j]=0;//ツ倍ツ青板づーツ渉慊つュ
			}
		}
	}
	/*
	for(i=0;i<NUM;i++)
		if(p[i])cout<<i<<",";
		*/
	int a;
	int min,max;
	while(cin>>a){
		for(i=a-1;i>=0;i--){
			if(p[i]){
				min=i;
				break;
			}
		}
		for(j=a+1;j<=NUM;j++){
			if(p[j]){
				max=j;
				break;
			}
		}
		cout<<min<<" "<<max<<endl;		
	}
	
	return 0;
}