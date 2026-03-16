#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char str[4];
    bool cap[3]={1,0,0};
    while(cin>>str)
    {
        if(str[0]=='0')break;
        if(str[0]=='A'&&str[2]=='B'||str[2]=='A'&&str[0]=='B'){
            swap(cap[0],cap[1]);
        }
        if(str[0]=='A'&&str[2]=='C'||str[2]=='A'&&str[0]=='C'){
            swap(cap[0],cap[2]);
        }
        if(str[0]=='B'&&str[2]=='C'||str[2]=='B'&&str[0]=='C'){
            swap(cap[1],cap[2]);
        }
    }
    for(int i=0;i<3;++i){
        if(cap[i]){
            switch(i){
                case 0: cout<<'A'<<endl;return 0;
                case 1: cout<<'B'<<endl;return 0;
                case 2: cout<<'C'<<endl;return 0;
            }
        }
    }
}