#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <vector>

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
        string str;
        int sum_v = 0, sum_n = 0, i = 0;
        int tmp_v, tmp_n;
        double avg;
        vector< string > vec;

        while ( cin >> str )
        {
                vec = split( str, ',' );
                tmp_v = atoi( vec[0].c_str() );
                tmp_n = atoi( vec[1].c_str() );
                sum_v = sum_v + tmp_v * tmp_n;
                sum_n = sum_n + tmp_n;
                i++;
        }

        avg = 1.0 * sum_n / i;
        avg = avg - sum_n / i;
        if ( avg >= 0.5 )
                sum_n = sum_n / i + 1;
        else
                sum_n = sum_n / i;

        cout << sum_v << endl;
        cout << sum_n << endl;

        return 0;
}

