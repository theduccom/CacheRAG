#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string b;
    int bn[4]={0};
    while(cin>>n)
    {
        cin.ignore();
        cin>>b;
        if(b=="A")bn[0]++;
        if(b=="B")bn[1]++;
        if(b=="AB")bn[2]++;
        if(b=="O")bn[3]++;
    }
    for(int i=0;i<4;++i)cout<<bn[i]<<endl;
    return 0;
}