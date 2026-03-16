#include <iostream>
using namespace std;
 
int main(){
	int n,pm,pe,pj;
	
	while(cin >> n,n){
		for(int i=0;i<n;i++){
			cin >> pm >> pe >> pj;
			
			double me=(pm+pe)/2;
			double avg=(pm+pe+pj)/3;
			
			if(pm==100||pe==100||pj==100||me>=90||avg>=80){
				cout << "A" << endl;
			}
			else if(avg>=70||avg>=50&&(pm>=80||pe>=80)){
				cout << "B" << endl;
			}
			else cout << "C" << endl;
		}
	}
  return 0;
}