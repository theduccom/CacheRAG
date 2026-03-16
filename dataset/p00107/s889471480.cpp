#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;


int tate,yoko,taka,n;

double naname(int x, int y){
    return sqrt(x*x+y*y);
}

int main(){
    while(cin>>tate>>yoko>>taka){
        if(tate==0&&yoko==0&&taka==0)break;
        double min_naname=min(min(naname(tate, yoko),naname(tate, taka)),naname(yoko,taka));
        
        cin>>n;
        for(int i=0; i<n; i++){
            double iriguchi;
            cin>>iriguchi;
            if(iriguchi*2>min_naname)cout<<"OK"<<endl;
            else cout<<"NA"<<endl;
        }
        
        
    }
}