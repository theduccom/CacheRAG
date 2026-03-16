#include <iostream>
#include <string>
using namespace std;

string Replace( string& String1, string String2, string String3 )
{
    string::size_type  Pos( String1.find( String2 ) );
    
    while( Pos != std::string::npos )
    {
        String1.replace( Pos, String2.length(), String3 );
        Pos = String1.find( String2, Pos + String3.length() );
    }
    
    return String1;
}

int main(void) {
    string input;
    getline(cin, input);
    Replace(input, "apple", "pcaeh");
    Replace(input, "peach", "alppe");
    Replace(input, "pcaeh", "peach");
    Replace(input, "alppe", "apple");
    cout << input << endl;
    return(0);
}