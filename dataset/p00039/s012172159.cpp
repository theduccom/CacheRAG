#include <iostream>
using namespace std;

int main(){
    string ss;
    int num[128];
    num['M'] = 1000;
    num['D'] = 500;
    num['C'] = 100;
    num['L'] = 50;
    num['X'] = 10;
    num['V'] = 5;
    num['I'] = 1;
    while( cin >> ss ){
        string::iterator it = ss.begin();
        int answer = 0;
        while( it != ss.end() ){
            if( it+1 == ss.end() ){
                answer += num[ *it ];
            }else if( num[ *it ] < num[ *(it+1) ] ){
                answer += num[ *(it+1) ] - num[ *it ];
                it++;
            }else{
                answer += num[ *it ];
            }
            it++;
        }
        cout << answer << endl;
    }
    return 0;
}