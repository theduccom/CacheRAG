#include <iostream>
using namespace std;
int main()
{
    int t=0;
    while(1){
        int a,b,count=0;
        cin>>a>>b;
        if(a==0&&b==0)return 0;
        if(t!=0)cout<<endl;
        for(;a<=b;++a){
            if(a%4==0){
                if(a%100==0){
                    if(a%400==0){
                        cout<<a<<endl;++count;continue;
                        }
                        continue;
                }
                cout<<a<<endl;
                ++count;
            }
        }
        if(count==0)cout<<"NA"<<endl;
        t++;
    }
}