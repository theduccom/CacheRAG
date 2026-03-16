#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

string Replace(string,string,string);

int main(){
  string str;
  bool flag = false;
  while(cin >> str){
    
    str = Replace(str,"apple","-");
    str = Replace(str,"peach","apple");
    str = Replace(str,"-","peach");

    if(flag){
      cout << " ";
    }
    cout << str;
    flag = true;
  }
  cout << endl;
}

//  ツ閉カツ篠堋療アツづーツ置ツ環キツつキツづゥ
string Replace( string String1, string String2, string String3 )
{
    string::size_type  Pos( String1.find( String2 ) );

    while( Pos != string::npos )
    {
        String1.replace( Pos, String2.length(), String3 );
        Pos = String1.find( String2, Pos + String3.length() );
    }

    return String1;
}