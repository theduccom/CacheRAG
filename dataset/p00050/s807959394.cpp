#include <iostream>
#include <string>
using namespace std;

int main()
{
    string in_str;
    getline(cin, in_str);
    for(int i=0; i<in_str.length(); i++)
    {
        string tmp_str = in_str.substr(i, 5);
        if(tmp_str == "apple")
        {
            in_str.replace(i, 5, "peach");
        }
        else if(tmp_str == "peach")
        {
            in_str.replace(i, 5, "apple");
        }
        else
        {
            /* NOP */
        }
    }
    cout << in_str << endl;
    return 0;
}

