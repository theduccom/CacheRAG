#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	for(int i=0; i< s.size(); i++){
		if(s.substr(i, 5) == "apple") s.replace(i, 5, "peach");
		else if(s.substr(i, 5) == "peach") s.replace(i, 5, "apple");
	}
	cout << s << endl;
}