#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, p;
	string str;
	
	cin >> n; cin.get();
	while(n--){
		getline(cin, str);
		
		while(p = str.find("Hoshino"), p != string::npos){
			str.replace(p, 7, "Hoshina");
		}
		
		cout << str << endl;
	}
	
	return 0;
}