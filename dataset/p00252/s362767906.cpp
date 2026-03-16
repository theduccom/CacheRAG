#include <iostream>
using namespace std;
int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    if((a==1&&b==0&&c==0)||(a==0&&b==1&&c==0)||(a==0&&b==0&&c==0)){
        
        cout<<"Close"<<endl;
    }// Your code here!
    else if((a==1&&b==1&&c==0)||(a==0&&b==0&&c==1)){
        cout<<"Open"<<endl;
    }
    
}

