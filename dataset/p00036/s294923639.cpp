#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

char Types(char x[12][11]);

int main () {
    char x[100];
    for(int i=0; i<100; i++){
        x[i]='0';
    }


    while(cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4]>>x[5]>>x[6]>>x[7]>>x[8]>>x[9]>>x[10]>>x[11]>>x[12]>>x[13]>>x[14]>>x[15]>>x[16]>>x[17]>>x[18]>>x[19]>>x[20]>>x[21]>>x[22]>>x[23]>>x[24]>>x[25]>>x[26]>>x[27]>>x[28]>>x[29]>>x[30]>>x[31]>>x[32]>>x[33]>>x[34]>>x[35]>>x[36]>>x[37]>>x[38]>>x[39]>>x[40]>>x[41]>>x[42]>>x[43]>>x[44]>>x[45]>>x[46]>>x[47]>>x[48]>>x[49]>>x[50]>>x[51]>>x[52]>>x[53]>>x[54]>>x[55]>>x[56]>>x[57]>>x[58]>>x[59]>>x[60]>>x[61]>>x[62]>>x[63]){

//        for(int i=0; i<64; i++){
//            cin>>x[i];
////            if(x[i]==EOF){
////                flag=0;
////                break;
////            }
//        }
////        if(flag!=1){
////            break;
////        }
//        
        int first=-1;
        for(int i=0; i<64; i++){
            if(x[i]=='1'){
                first=i;
                break;
            }
        }
//        if(first==-1){
//            break;
//        }
        
        if(x[first+1]=='1'){
            if(x[first+2]=='1'){
                cout<<"C"<<endl;
            }else if(x[first+7]=='1'){
                cout<<"G"<<endl;
            }else if(x[first+10]=='1'){
                cout<<"E"<<endl;
            }else{
                cout<<"A"<<endl;
            }
        }else{
            if(x[first+7]=='1'){
                cout<<"D"<<endl;
            }else if(x[first+9]=='1'){
                cout<<"F"<<endl;
            }else{
                cout<<"B"<<endl;
            }
        }
        
        
    }
    
    return 0;
}