#include <iostream>
using namespace std; 
bool na=true;
void uruu(int a){
    if(a%4==0&&a%100==0&&a%400==0){cout<<a<<endl;na=false;return;}
    else if(a%4==0&&a%100==0){return;}
    else if(a%4==0){cout<<a<<endl;na=false;return;}
    else return;
}


int main ()
{
    int a,b;
    bool first=true;
    while(cin>>a>>b){
        
        if(a==0&&b==0){return 0;}
        if(first)first=false;
        else cout<<endl;
        na=true;
        while(a<=b){
            uruu(a);
            a++;
        }
        if(na)cout<<"NA"<<endl;
        
        
    }
    }