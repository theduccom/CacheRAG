#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <bitset>
#include <memory.h>

using namespace std;



int main() {
    
    int x;
    int blood[4]={0};
    
    while(cin>>x){
        string abo;
        cin>>abo;
        if(abo==",A")blood[0]++;
        if(abo==",B")blood[1]++;
        if(abo==",AB")blood[2]++;
        if(abo==",O")blood[3]++;
    }
    for(int i=0; i<4; i++)cout<<blood[i]<<endl;
}