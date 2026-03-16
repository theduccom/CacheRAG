#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	string str;
	
	cin >> n;
	cin.ignore();
	while(getline(cin,str)){
		int pos;
		while( (pos=str.find("Hoshino",0)) != string::npos ){
			str.erase(pos,7);
			str.insert(pos,"Hoshina");
		}
		
		cout << str << endl;
	}
}