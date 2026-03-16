#include <iostream>
using namespace std;

//0093
int main(){
	int y1, y2, n=0;
	while(cin >> y1 >> y2, y1||y2){
		int count = 0;
		if(n){
			cout << endl;
		}
		++n;
		for(int i=y1; i<y2+1; ++i){
			if( (i%4)==0 && (i%100)!=0 || i%400==0 ){
				cout << i << endl;
				++count;
			}
		}

		if(!count){
			cout << "NA" << endl;
		}
		
	}
}