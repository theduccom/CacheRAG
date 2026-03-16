#include <bits/stdc++.h>
using namespace std;
int main(){
    
    cin.tie( 0 );
    ios::sync_with_stdio( false );
    
    int n;
    cin >> n;
    cin.ignore(); //<-----!!!!!!!!!!
    string s;
    
    while( getline(cin, s) ){
        
        string tmp = s;
        bool flag = false;
        auto pos = s.find( "Hoshino" );
        
        while( pos != string::npos ){
            
            if( pos != string::npos ){
                
                s.replace( pos, 7, "Hoshina" );
                pos = s.find( "Hoshino", pos , 7 );
                flag = true;
            }
        }
        cout << ( flag ? s : tmp ) << endl;
    }
    return 0;
}