#include "bits/stdc++.h"
using namespace std;


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

int main() {
	string s,ss,sss,ssss;
	while(getline(cin,s)){
		//cout<<s<<endl;
	ss=Replace(s, "peach", "*****");
	sss=Replace(ss, "apple","peach");
	ssss=Replace(sss, "*****","apple");
	cout<<ssss<<endl;
	}
}