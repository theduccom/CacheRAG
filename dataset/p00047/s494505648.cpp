#include<iostream>
using namespace std;

int main()
{
    char c1,c2,moji;
    int cup[3]={0};
    cup[0]=1;
    while(cin>>c1>>moji>>c2,!cin.eof()){
        int c;
        c=cup[(int)c1-(int)'A'];
        cup[(int)c1-(int)'A']=cup[(int)c2-(int)'A'];
        cup[(int)c2-(int)'A']=c;
    }
    for(int i=0;i<3;i++){
        if(cup[i]==1){
            cout<<(char)((int)'A'+i)<<endl;
            break;
        }
    }
    return 0;
}