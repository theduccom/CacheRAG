#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;

//  文字列を置換する
std::string Replace( std::string String1, std::string String2, std::string String3 )
{
    std::string::size_type  Pos( String1.find( String2 ) );

    while( Pos != std::string::npos )
    {
        String1.replace( Pos, String2.length(), String3 );
        Pos = String1.find( String2, Pos + String3.length() );
    }

    return String1;
}



int main()
{
	int n;
	string str;
	
	cin >> n;
	cin.ignore();
	for (int i=0; i<n; i++)
	{
		getline(cin, str);
		str = Replace(str, "Hoshino", "Hoshina");
		cout << str << endl;
	}
	
	return 0;
}