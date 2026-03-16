#include <iostream>

using namespace std;

int main(void){
    int i,j,k,l;
    int year_f,year_l;
    bool fast_f=false;
    bool flag;

    while(cin>>year_f>>year_l,year_f&&year_l){
        flag=true;
        if(fast_f){
            cout<<endl;
        }
        fast_f=true;
        for(i=year_f;i<=year_l;i++){
            if(i%4==0&&i%100!=0||i%400==0){
                cout<<i<<endl;
                flag=false;
            }
        }
        if(flag){
            cout<<"NA"<<endl;
        }
    }
    return(0);
    
}