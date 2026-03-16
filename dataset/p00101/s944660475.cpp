#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	getline(cin,s);
	while(n--){
		vector<int> b;
		getline(cin,s);
		int pos = 0;
		while(~s.find("Hoshino",pos)){
			pos = s.find("Hoshino",pos)+1;
			b.push_back(pos-1);
		}
		for(int i=0;i<b.size();i++)
			s.replace(b[i],7,"Hoshina");
		cout << s << endl;
	}
}