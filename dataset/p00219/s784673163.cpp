#include <iostream>
using namespace std;

int main(){
	
	int t;
	
	while(cin >> t,t){
		int ice[10]={},i,g,n,p;
		
		for(p=0;p<t;p++){
			cin >> i;
			
			ice[i]++;
		}
		
		for(g=0;g<=9;g++){
			if(ice[g]==0){
				cout << "-" << endl;
			}
			
			else if(ice[g]>0){
				for(n=0;n<ice[g];n++){
					cout << "*";
				}
				
				cout << endl;
			}
		}
	}
	
	return 0;
}