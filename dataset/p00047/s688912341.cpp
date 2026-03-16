#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

std::vector<std::string> split(const std::string &str, char sep)
{
    std::vector<std::string> v;
    std::stringstream ss(str);
    std::string buffer;
    while( std::getline(ss, buffer, sep) ) {
        v.push_back(buffer);
    }
    return v;
}


int main()
{
        char tmp, cup = 'A';
        string input;
        vector< string > inputv;

        while ( cin >> input )
        {
                inputv = split( input, ',' );
                if ( inputv[0][0] == cup )
                {
                        cup = inputv[1][0];
                }
                else if ( inputv[1][0] == cup )
                {
                        cup = inputv[0][0];
                }
        }

        cout << cup << endl;
        return 0;
}

