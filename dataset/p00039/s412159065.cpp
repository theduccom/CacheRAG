#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<char, int> dec;
    dec['I'] = 1;
    dec['V'] = 5;
    dec['X'] = 10;
    dec['L'] = 50;
    dec['C'] = 100;
    dec['D'] = 500;
    dec['M'] = 1000;
    string in;
    while( cin >> in ){
        int res=0;
        for( int i=0; i<in.length()-1; i++ ){
            if( dec[in[i]] >= dec[in[i+1]] ){
                res += dec[in[i]];
            }else{
                res -= dec[in[i]];
            }
        }
        res += dec[in[in.length()-1]];
        cout << res << endl;
    }
    return 0;
}