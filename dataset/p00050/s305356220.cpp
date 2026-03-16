#include <string>
#include <iostream>
using namespace std;


int main(){
    string s;
    string ss = "";
    while (cin >> s){
	string::size_type t = s.find("apple");
	if (t != string::npos) s.replace(t, 5, "peach");
	else {
	    t = s.find("peach");
	    if (t != string::npos) s.replace(t, 5, "apple");
	}
	ss += s + " ";
    }
    ss.erase(ss.end()-1);
    cout << ss << endl;
}