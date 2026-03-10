#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <deque>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <set>
using namespace std;
int main(void){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            cout << i << "x" << j << "=" << i*j << endl;
        }
    }
}
