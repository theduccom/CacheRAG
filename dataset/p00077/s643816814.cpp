#include<iostream>
using namespace std;
string s;
main()
{
    while(cin>>s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='@')
            {
                char c=s[i+2];
                int n=s[i+1]-'0';
                i+=2;
                for(int j=0;j<n;j++)cout<<c;
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
}
