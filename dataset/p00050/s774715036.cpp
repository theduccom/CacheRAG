#include <iostream>
#include <string>
using namespace std;

int main(){
	string in, out = "";
	while(cin>>in){
		int ap = in.find("apple");
		int pe = in.find("peach");
		if(ap>=0){
			in.replace(ap,5, "peach");
		}
		else if(pe>=0){
			in.replace(pe,5, "apple");
		}
		if(out ==""){
			out += in;
		}
		else{
			out += " ";
			out += in;
		}
	}
	cout << out << endl;
	return 0;
}