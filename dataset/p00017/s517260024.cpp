#include <iostream>
#include <string>

using namespace std;

bool CheckText(string x)
{
    if(x.find("this") < x.length())
    {
        return false;
    }
    else if(x.find("the") < x.length())
    {
        return false;
    }
    else if(x.find("that") < x.length())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string Alphabet = "abcdefghijklmnopqrstuvwxyza";
    string Text;

    while(getline(cin, Text))
    {
                while(CheckText(Text))
        {
            for(unsigned int a = 0; a < Text.length(); a++)
            {
                for(int b = 0; b < 26; b++)
                {
                    if(Text[a] == Alphabet[b])
                    {
                        Text[a] = Alphabet[b+1];
                        break;
                    }
                    else if(Text[a] == ' ')
                    {
                        break;
                    }
                }
            }

        }

        cout << Text << endl;
    }

}