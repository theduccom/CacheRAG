#include <iostream>
#include <string>
using namespace std;

int translate(char c);

int main()
{
    string line;
    while(cin >> line)
    {
        int buffer = 0;
        int number = 0;
        for(int i=0; i<line.size()-1; i++)
        {
            int current_val = translate(line[i]);
            int next_val = translate(line[i+1]);
            buffer += current_val;
            if(current_val > next_val)
            {
                number += buffer;
                buffer = 0;
            }
            else if(current_val < next_val)
            {
                number -= buffer;
                buffer = 0;
            }
            else
            {
                /* Nop */
            }
        }
        number += buffer;
        number += translate(line[line.size()-1]);
        cout << number << endl;
    }
    return 0;
}

int translate(char c)
{
    int ret_val = 0;
    if(c == 'I')
    {
        ret_val = 1;
    }
    else if(c == 'V')
    {
        ret_val = 5;
    }
    else if(c == 'X')
    {
        ret_val = 10;
    }
    else if(c == 'L')
    {
        ret_val = 50;
    }
    else if(c == 'C')
    {
        ret_val = 100;
    }
    else if(c == 'D')
    {
        ret_val = 500;
    }
    else if(c == 'M')
    {
        ret_val = 1000;
    }
    else
    {
       /* Nop */  
    }
    return ret_val;
}