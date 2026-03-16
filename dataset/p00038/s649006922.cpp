#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int x[5];



int main () {
    while(scanf("%d,%d,%d,%d,%d",&x[0],&x[1],&x[2],&x[3],&x[4])!=EOF){
        int bucket[15]={0};
        for(int i=0; i<5; i++){
            if(x[i]==1){
                bucket[14]++;
            }
            bucket[x[i]]++;
        }
        
        int max1=0;
        int max2=0;
        for(int i=0; i<14; i++){
            if(max1<bucket[i]){
                max2=max1;
                max1=bucket[i];
            }else if(max2<bucket[i]){
                max2=bucket[i];
            }
        }
        
        int first=-1;
        for(int i=0; i<15; i++){
            if(bucket[i]==1){
                first=i;
                break;
            }
        }
        

        
        int straight=1;
        for(int i=first; i<first+4; i++){
            if(bucket[i]!=1){
                straight=0;
                break;
            }
        }
        
        if(straight!=1){
            straight=1;
            for(int i=10; i<15; i++){
                if(bucket[i]!=1){
                    straight=0;
                    break;
                }
            }
        }
        
        
        if(max1==4){
            cout<<"four card"<<endl;
        }else if(max1==3&&max2==2){
            cout<<"full house"<<endl;
        }else if(straight==1){
            cout<<"straight"<<endl;
        }else if(max1==3){
            cout<<"three card"<<endl;
        }else if(max1==2&&max2==2){
            cout<<"two pair"<<endl;
        }else if(max1==2){
            cout<<"one pair"<<endl;
        }else{
            cout<<"null"<<endl;
        }




    }
    
    return 0;
}