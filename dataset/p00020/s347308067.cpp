#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>

using namespace std;


int main(){
    string line;
    getline(cin,line);
    for(int i=0;i<line.length();i++){
        if(isalpha(line[i]))
            line[i]+='A'-'a';
    }
    cout << line << endl;
    return 0;
}