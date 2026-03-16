#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        for(int i=6;i<s.length();i++)
            if(s[i]=='o'&&s[i-1]=='n'&&s[i-2]=='i'&&s[i-3]=='h'&&s[i-4]=='s'&&s[i-5]=='o'&&s[i-6]=='H')
                s[i]='a',s[i-1]='n',s[i-2]='i',s[i-3]='h',s[i-4]='s',s[i-5]='o',s[i-6]='H';
        cout<<s<<endl;
    }
}