#include<iostream>
#include<string>

using namespace std;

int main()
{
   string str;
   int n;

   cin >> n;
   cin.ignore();

   for(int i = 0; i < n; ++i){

      getline( cin, str);

      while( string::npos != str.find( "Hoshino"))
      {
         int pnt = str.find( "Hoshino" );

         str.replace( pnt, 7, "Hoshina");
      }

      cout << str << endl;
   }
}