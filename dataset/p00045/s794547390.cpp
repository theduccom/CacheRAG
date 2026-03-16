#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int price,num;
    int allPrice=0,allNum=0;
    int ave;
    int count=0;
    char c;
    while(cin>>price>>c>>num,!cin.eof()){
        count++;
        allPrice += price*num;
        allNum += num;
    }
    ave=(double)allNum/count+0.5;
    cout<<allPrice<<endl<<ave<<endl;
    return 0;
}