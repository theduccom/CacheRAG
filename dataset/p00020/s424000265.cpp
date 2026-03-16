#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
    int i,n;
    string a;
    getline(cin,a);
    for(i=0; i<a.size(); i++){
             if ('a' <= a[i] && a[i] <= 'z')
             a[i] += 'A' - 'a';
    }
    cout<< a<<endl;
    return 0;
}