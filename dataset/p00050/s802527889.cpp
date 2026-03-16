#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
 
using namespace std;
 
const double eps=1e-10;

int main()
{

	string s,tmp;

	for(int i=0;i<2000;i++) tmp+='a';

	while(getline(cin,s)){

		int pos=0;
		while((pos=s.find("apple"))!=string::npos){
			s.replace(pos,5,tmp);
		}

		pos=0;
		while((pos=s.find("peach"))!=string::npos){
			s.replace(pos,5,"apple");
		}

		pos=0;
		while((pos=s.find(tmp))!=string::npos){
			s.replace(pos,2000,"peach");
		}

		cout<<s<<endl;

	}

	return 0;
}