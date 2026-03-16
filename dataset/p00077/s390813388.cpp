#include <iostream>
using namespace std;

int main(){
    string ss;
    while( cin >> ss ){
        for(string::iterator it = ss.begin(); it != ss.end(); it++){
            if( *it == '@' ){
                for(int i = 0; i < *(it+1)-'0'; i++){
                    cout << *(it+2);
                }
                it += 2;
            }else{
                cout << *it;
            }
        }
        cout << endl;
    }
    return 0;
}