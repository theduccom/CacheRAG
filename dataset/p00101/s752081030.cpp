#include<iostream>
using namespace std;

int n;
string A;
 
int main(){
	 
  	cin>>n;

  	getline(cin, A);
  	while(n--) {
  		
    getline(cin, A);
    for(int i=0;i<(int) A.size()-6;i++) {
    	
    if(A.substr(i,7) == "Hoshino")
    A.replace(i, 7, "Hoshina");

    }
    cout <<A << "\n";
  }
  	return 0;
}
