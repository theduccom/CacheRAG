#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        for(int n=0; n<26; n++)
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i] >= 'a' && s[i] < 'z')
                {
                    s[i]=s[i]+1;
                }
                else if(s[i] == 'z')
                {
                    s[i] = 'a';
                }
                else
                {

                }
            }
            if(  s.find("the")  != std::string::npos
              || s.find("this") != std::string::npos
              || s.find("that") != std::string::npos)
            {
                cout << s << endl;
                break;
            }
        }
    }

    return 0;
}