#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

const char cup_list[3] = {'A', 'B', 'C'};

int calcIndex(string s);

int main()
{
    int cup[3] = {1, 0 , 0};
    string in_str;
    while(getline(cin, in_str))
    {
        istringstream stream(in_str);
        string field;
        vector<string> in_data;
        while (std::getline(stream, field, ',')) 
        {
            in_data.push_back(field);
        }
        int x = calcIndex(in_data[0]);
        int y = calcIndex(in_data[1]); 
        swap(cup[x], cup[y]);       
    }
    for(int i=0; i<3; i++)
    {
        if(cup[i] > 0)
        {
            cout << cup_list[i] << endl;
        }
    }
    return 0;
}

int calcIndex(string s)
{
    int index; 
    if(s == "A")
    {
        index = 0;
    }
    else if(s == "B")
    {
        index = 1;
    }
    else
    {
        index = 2;
    }
    return index;
}