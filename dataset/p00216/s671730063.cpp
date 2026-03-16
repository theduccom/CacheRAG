#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        int w;
        cin>>w;if(w==-1)return 0;
        int res=1150;
        for(;w>30;--w){
            res+=160;
        }
        for(;w>20;--w){
            res+=140;
        }
        for(;w>10;--w){
            res+=125;
        }
        cout<<4280-res<<endl;
    }
}