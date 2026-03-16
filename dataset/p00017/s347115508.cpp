#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str,kaku[3]={"the","this","that"};
    while(getline(cin,str)){
        while(1){
            for(int i=0;i<str.size();i++){
                if('A'<=str[i]&&str[i]<='Y')str[i]++;
                else if(str[i]=='Z')str[i]-=25;
                else if('a'<=str[i]&&str[i]<='y')str[i]++;
                else if(str[i]=='z')str[i]-=25;
            }
            for(int i=0;i<3;i++){
                if(str.find(kaku[i])!=string::npos)goto exit;
            }
        }
    exit:
        cout<<str<<endl;
    }
    return 0;
}