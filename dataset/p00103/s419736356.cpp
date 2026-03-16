#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, score=0, out=0;
	int rui[4];
	string s;

	for(int i=0 ; i<4 ; i++){
		rui[i] = (i==0)? 1 : 0 ;
	}
	cin >> n ;
	
	while( n > 0 ){
		
		cin >> s;
		if( s == "HIT" ){
			if( rui[1] == 1 ){
				if( rui[2] == 1 ){
					( rui[3] == 1 )? score++ : rui[3] = 1 ;
				}else{
					rui[2] = 1;
				}
			}else{
				rui[1] = 1;
			}
		}else if( s == "OUT" ){
			out++;
		}else if( s == "HOMERUN" ){
			for(int i=0 ; i<4 ; i++){
				score += rui[i];
				if(i>=1) rui[i] = 0;
			}
		}
			
		if(out==3){
			out = 0;
			n--;
			for(int i=0 ; i<4 ; i++){
				rui[i] = (i==0)? 1 : 0 ;
			}
			cout << score << endl;
			score = 0;
		}
	}
	return 0;
}