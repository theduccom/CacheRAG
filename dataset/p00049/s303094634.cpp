#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int checkBloodType(string str);

int main()
{
    string in_str;
    int num[4] = {};
    while(getline(cin, in_str))
    {
        istringstream stream(in_str);
        string field;
        vector<string> in_data;
        while (std::getline(stream, field, ',')) 
        {
            in_data.push_back(field);
        }
        num[checkBloodType(in_data[1])]++;
    }
    for(int i=0; i<4; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}

int checkBloodType(string str)
{
    int index = 0;

    if(str == "A")
    {
        index = 0;
    }
    else if(str == "B")
    {
        index = 1;
    }
    else if(str == "AB")
    {
        index = 2;
    }
    else if(str == "O")
    {
        index = 3;
    }
    else
    {
        /* Nop */
    }
    return index;
}

