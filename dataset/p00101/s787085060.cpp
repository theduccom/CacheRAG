#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	string hosino = "Hoshino";
	string hosina = "Hoshina";
	int n, index;
	cin>>n;cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,str);
		while((index = str.find(hosino.c_str(), 0)) != string::npos){
			str.erase(str.begin()+index, str.begin()+index+hosino.size());
			str.insert(index, hosina);
		}
		cout<<str<<endl;
	}
	
	return 0;
}