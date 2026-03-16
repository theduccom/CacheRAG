#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int x[5];



int main () {
    
    
    map<char, int> value;
    // 挿入
    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;

    
    
    string roma;
    while(cin>>roma){
        int before = 9999;
        int now = 0;
        int sum = 0;
        
        for(int i=0; i<roma.length(); i++){
            now = value[roma[i]];
            if(before>=now){
                sum+=now;
                before = now;
            }else{
                sum+=now-before*2;
                before = now;
            }
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}