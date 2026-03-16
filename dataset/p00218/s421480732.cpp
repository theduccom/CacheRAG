#include <iostream>

using namespace std;

int main(void){
	int n;
	
	while(cin >> n && n){
		for(int i=0;i<n;i++){
			int lang,math,eng;
			double ave;
			
			cin >> math >> eng >> lang;
			ave = (double)(math+eng+lang)/3;
			
			if(math == 100 || eng == 100 || lang == 100){
				cout << "A" << endl;
			}else if((double)(math+eng)/2 >= 90){
				cout << "A" << endl;
			}else if(ave >= 80){
				cout << "A" << endl;
			}else if(ave >= 70){
				cout << "B" << endl;
			}else if(ave >= 50 && (math >= 80 || eng >= 80)){
				cout << "B" << endl;
			}else{
				cout << "C" << endl;
			}
		}
	}
	
}