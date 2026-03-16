#include<string>
#include<iostream>

using namespace std;

int main()
{
	int n;	cin>>n;cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
		if(s.length()>=7){
			for(int i=0;i<s.length()-6;i++){
				if(s.substr(i,7)=="Hoshino")
					s.replace(i,7,"Hoshina");
			}
		}
		cout<<s<<endl;
	}
	return 0;
}