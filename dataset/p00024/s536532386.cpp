#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    double input, time, height;

    while(cin >> input){
        time = input / 9.8;
        height = 4.9 * time * time;
        rep(i, 10000){
            if(height < 5 * i - 5){
                cout << i << endl;
                break;
            }
        }
    }
}