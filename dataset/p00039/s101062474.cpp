#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    string str;
    while(cin>>str,!cin.eof()){
        int block[str.length()],num=0;
        for(int i=0;i<str.length();i++){
            switch(str[i]){
                case 'M' :
                    block[i]=1000;
                    break;
                case 'D' :
                    block[i]=500;
                    break;
                case 'C' :
                    block[i]=100;
                    break;
                case 'L' :
                    block[i]=50;
                    break;
                case 'X' :
                    block[i]=10;
                    break;
                case 'V' :
                    block[i]=5;
                    break;
                case 'I' :
                    block[i]=1;
                    break;
            }
        }
        for(int i=0;i<str.length();i++){
            if(block[i]<block[i+1] && i!=str.length()-1){
                num += block[i+1]-block[i];
                i++;
            }
            else{
                num += block[i];
            }
        }
        cout<<num<<endl;
    }
    return 0;
}