#include <iostream>
using namespace std;

string apple("apple"), peach("peach");

bool match(string::iterator ss, string trg){
    string::iterator it = trg.begin();
    while( it != trg.end() && *ss == *it ){
        ss++; it++;
    }
    return ( it == trg.end() );
}

int main(){
    string text;
    getline(cin, text);
    for( string::iterator it = text.begin(); it != text.end(); it++ ){
        if( match(it, apple) ) text.replace( it, it+5, "peach");
        else if( match(it, peach) ) text.replace( it, it+5, "apple");
    }
    cout << text << endl;
    return 0;
}