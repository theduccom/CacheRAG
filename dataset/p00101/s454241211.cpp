#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s;
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,s);
		while(1){
			if(s.find("Hoshino")==string::npos) break;
			s.replace(s.find("Hoshino"),7,"Hoshina");
			}
		cout<<s<<endl;
		}
}