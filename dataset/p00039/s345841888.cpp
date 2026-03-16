#include <iostream>
#include <cstring>

using namespace std;

int change(char c){
    if(c=='I')return 1;
    if(c=='V')return 5;
    if(c=='X')return 10;
    if(c=='L')return 50;
    if(c=='C')return 100;
    if(c=='D')return 500;
    if(c=='M')return 1000;
    return 0;
}

int main(void){
    char str[100];
    int sum;
    
    while(cin>>str){
        sum=0;
        for(int i=0;i<strlen(str);i++){
            if(change(str[i])>=change(str[i+1])){
                sum+=change(str[i]);
            }
            else{
                sum+=change(str[i+1])-change(str[i]);
                i++;
            }
        }
        cout<<sum<<endl;
    }
    return(0);
}