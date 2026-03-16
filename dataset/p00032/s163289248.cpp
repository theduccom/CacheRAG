#include <iostream>
#include <string>
using namespace std;

int main()
{
	int s1,s2,d;
	char ch1,ch2;
    int rect=0,rhom=0;
	while(1){
		cin >> s1 >>ch1>> s2 >>ch2>> d;
		if(cin.eof()) break;
		
		if(s1*s1 + s2*s2 == d*d){
			rect++;
		}else if(s1==s2){
			rhom++;
		}
	}
	cout << rect <<endl << rhom << endl;
	return 0;
}