#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string in;
    getline( cin, in );
    for( int i=0; i+4<in.length(); i++ ){
        if( in.substr(i,5)=="apple" ) in.replace(i,5,"peach");
        else if( in.substr(i,5)=="peach" )  in.replace(i,5,"apple");
    }
    cout << in << endl;
    return 0;
}