#include<iostream>
#include<math.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        for(int i=0;i<26;i++){
            for(int j=0;j<s.length();j++)
                if(s[j]>='a'&&s[j]<='z')
                    s[j]='a'+(s[j]-'a'+1)%26;
            for(int j=2;j<s.length();j++){
                if(s[j]=='e'&&s[j-1]=='h'&&s[j-2]=='t'){
                    if((j-3<0||s[j-3]<'a'||s[j-3]>'z')&&((j==s.length()-1)||s[j+1]<'a'||s[j+1]>'z'))
                       goto next;
                    
                }
                if(j>2)
                    if((s[j]=='s'&&s[j-1]=='i'&&s[j-2]=='h'&&s[j-3]=='t')||(s[j]=='t'&&s[j-1]=='a'&&s[j-2]=='h'&&s[j-3]=='t'))
                        if((j-4<0||s[j-4]<'a'||s[j-4]>'z')&&((j==s.length()-1)||s[j+1]<'a'||s[j+1]>'z'))
                            goto next;
            }
        }
    next:cout<<s<<endl;
    }
}