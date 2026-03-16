#include <iostream>
using namespace std;
int main(){
	char com,from,to,ball='A';
	while(cin>>from>>com>>to){
		if(from==ball){
			ball=to;
		}else if(to==ball){
			ball=from;
		}
	}
	cout<<ball<<endl;
}