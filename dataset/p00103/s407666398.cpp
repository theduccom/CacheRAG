#include <iostream>
#include <stdio.h>
#include <time.h>
#include<string>
using namespace std;
int main(){
	int sumperson=0,n,out=0,score=0;
	string str;
	cin>>n;
	for(int i=0;i<n;i++){
		while(1){
			cin>>str;
			if(str=="OUT"){
				out++;
				if(out==3){
					break;
				}
			}
			else if(str=="HIT"){
				sumperson++;
				if(sumperson==4){
					sumperson=3;
					score++;
				}
			}
			else if(str=="HOMERUN"){
				score+=sumperson+1;
				sumperson=0;	
			}
		}
		cout<<score<<endl;
		sumperson=0;
		out=0;
		score=0;
	}
	return 0;
}