#include "bits/stdc++.h"
using namespace std;

int main() {
string s;
int d;
map<string,int> m;
while(getline(cin,s)){
	//cout<<s<<endl;
	//cout<<s.find("O")<<endl;
	if(s.find("AB")!= std::string::npos){++m["AB"];
	}else if(s.find("O")!= std::string::npos){++m["O"];
	}else if(s.find("B")!= std::string::npos){++m["B"];
	}else{++m["A"];}
}

cout<<m["A"]<<endl;
cout<<m["B"]<<endl;
cout<<m["AB"]<<endl;
cout<<m["O"]<<endl;
}