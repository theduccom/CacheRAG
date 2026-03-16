#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    char c;
    int line[2],centerLine,squareCount=0,diamondCount=0;
    while(cin>>line[0]>>c>>line[1]>>c>>centerLine){
        if(line[0]!=line[1]&&sqrt(line[0]*line[0]+line[1]*line[1])==centerLine){
            squareCount++;
        }
        if(line[0]==line[1]&&centerLine!=0){
            diamondCount++;
        }
    }
    cout<<squareCount<<endl<<diamondCount<<endl;
}