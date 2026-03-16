#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <cmath>

using namespace std;

void drip1(int x, int y,int square[10][10]){
    int i;
    for(i=x-1;i<=x+1;i++){
        if(i>=0 && i<10)square[i][y] += 1;
    }
    for(i=y-1;i<=y+1;i+=2){
        if(i>=0 && i<10)square[x][i] += 1;
    }
    
}

void drip2(int x, int y,int square[10][10]){
    for(int i=x-1;i<=x+1;i++){
        for(int j=y-1;j<=y+1;j++){
            if(i>=0 && j>=0 && i<10 && j<10){
                square[i][j] += 1;
            }
        }
    }

}

void drip3(int x, int y,int square[10][10]){
    
    for(int i=x-2;i<=x+2;i++){
        for(int j=y-2+abs(x-i); j<=y+2-abs(x-i); j++){
            if(i>=0 && j>=0 && i<10 && j<10){
                square[i][j] += 1;
            }
        }
    }
}



int main (int argc, char const* argv[]){
    int square[10][10]={};
    int size,x,y, count=0, max=0;
    string str, tmp;
    list<int> xysize;
    
    while(getline(cin,str)){
        stringstream ss(str);
        xysize.clear();
        
        while(getline(ss,tmp,',')){
            xysize.push_back(atoi(tmp.c_str()));
        }
        list<int>::iterator it = xysize.begin();
        x = *(it++);
        y = *(it++);
        size = *(it);
        
        
        if(size==1){
            drip1(x,y,square);
        }else if(size==2){
            drip2(x,y,square);
        }else if(size==3){
            drip3(x,y,square);
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(square[i][j]==0)count++;
            if(max < square[i][j]) max = square[i][j];
        }
    }

    
    cout << count << endl << max << endl;
    
    return 0;
}