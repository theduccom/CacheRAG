#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x;
	getline(cin,x);
	while(x.find("apple")!=-1)
		x.replace(x.find("apple"), 5,"-----");
	while(x.find("peach")!=-1)
		x.replace(x.find("peach"), 5,"+++++");
	while(x.find("-----")!=-1)
		x.replace(x.find("-----"), 5,"peach");
	while(x.find("+++++")!=-1)
		x.replace(x.find("+++++"), 5,"apple");	
	cout << x << endl;
}