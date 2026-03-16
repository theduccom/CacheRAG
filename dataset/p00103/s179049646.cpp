#include <iostream>
#include <stdlib.h>
using namespace std;

void simulate(){
	int outCount=0;
	int point=0;

	bool *base;
	base = new bool[4];
	for (int i=0;i<4;i++){
		base[i]=false;
	}

	string event;
	while(outCount!=3){
		cin >> event;


		if(event == "HIT"){
			if(base[3]){
				point++;
				base[3]=false;
			}
			if(base[2]){
				base[3]=true;
				base[2]=false;
			}
			if(base[1]){
				base[2]=true;
				base[1]=false;
			}
			base[1]=true;
		}

		else if(event == "HOMERUN"){
			for(int i=1;i<=3;i++){
				if(base[i]){
					point++;
					base[i]=false;
				}
			}
			point++;
		}

		else if(event == "OUT"){
			outCount++;
		}

		else{
			cout << "undefined" << endl;
			exit(1);
		}

	}

	cout << point << endl;
}

int main(){
	int n;
	cin >> n;

	for(int i=0;i<n;i++){
		simulate();
	}

	return 0;
}

