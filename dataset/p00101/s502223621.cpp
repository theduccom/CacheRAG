#include <iostream>
#include <string>
using namespace std;

int main()
{
	int g,i;
	string ob;
	
	cin >> i;
	cin.get( );
	
	for(g=0;g<i;g++){
		string::size_type pos;
		
		getline(cin, ob);
		while(pos=ob.find("Hoshino"), pos!=string::npos)ob.replace(pos, 7, "Hoshina");
		
		cout << ob << endl;
	}
	
	return 0;
}