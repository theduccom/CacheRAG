#include<iostream>
#include<string>
using namespace std;

int main()
{
    int cnt=0;
    string str;
    while(getline(cin,str)){
        for(int i=0; i<str.length(); i++){
            if(str[i] != str[str.length()-i-1]){
                break;
            }
            if(i==str.length()-1){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}