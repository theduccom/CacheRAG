#include<iostream>
using namespace std;
int main(){
         
    int km[10],v1,v2; char a;
    double leng;
    while(1){
       for(int i = 0; i < 10; i++)
                cin >> km[i] >> a;
         
        if(!cin)    break;
        cin >> v1 >> a >> v2;
  
    leng = 0.0;
    for(int k =0;k<10;k++)
    leng += km[k];
    double length = leng * v1 / (v1 +v2);
    leng = 0.0; 
    for(int k=0;k<10;k++){
    leng +=  km[k];
    if(leng >= length ){
     
    cout << k+1 <<endl; break;
    }
    }  
    }
}