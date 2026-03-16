#include <iostream>
#include <string>

using namespace std;

char swap(char,char,char);

int main(){
	string a;
	char init ='A';
	while(cin >> a){
		//string a;
		//cin >> a;
		init = swap(init,a[0],a[2]);
	}
	cout << init << endl;
}

char swap(char now, char pos1, char pos2){
	if(now == pos1){
		return pos2;
	}
	else if(now == pos2){
		return pos1;
	}
	else{
		return now;
	}
}