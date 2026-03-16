#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,ans;
    while(getline(cin,s) )   
    {
        for(int i=0;i<s.length()-4;i++)
        {
            if(s[i]=='a')
            {
                if(s[i+1]=='p'&&s[i+2]=='p'&&s[i+3]=='l'&&s[i+4]=='e')
                {
                    s[i]='p';
                    s[i+1]='e';
                    s[i+2]='a';
                    s[i+3]='c';
                    s[i+4]='h';
                    continue;
                }
                continue;
            }
            if(s[i]=='p')
            {
                if(s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='c'&&s[i+4]=='h')
                {
                    s[i]='a';
                    s[i+1]='p';
                    s[i+2]='p';
                    s[i+3]='l';
                    s[i+4]='e';
                    continue;
                }
                continue;
            }
        }
        cout << s << endl;
    }
    return 0;
}