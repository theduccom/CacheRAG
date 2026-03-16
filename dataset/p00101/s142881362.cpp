#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, pos;
    string str;

    cin >> n; cin.get();
    while (n--){
	getline(cin, str);
	while (pos = str.find("Hoshino"), pos!= string::npos)
	    str.replace(pos,7,"Hoshina");
	cout << str << "\n";
    }
}