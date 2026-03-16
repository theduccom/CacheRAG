#include <iostream>
#include <string>
#include <sstream>
#include <array>

using namespace std;

constexpr int STATION = 10;

int main()
{
    string buf;
    while (getline(cin, buf)) {
        for (unsigned i = 0; i < buf.size(); i++) {
            if (buf.at(i) == ',') {
                buf.at(i) = ' ';
            }
        }

        stringstream ss(buf);
        array<int, STATION> interval;
        double vel01, vel02, vel_sum;
        for (size_t i = 0; i < STATION; i++) {
            ss >> interval.at(i);
        }
        ss >> vel01 >> vel02;
        vel_sum = vel01 + vel02;

        double length = 0;
        for (size_t i = 0; i < STATION; i++) {
            length += interval.at(i);
        }

        int ans = 1;
        for (size_t i = 0; i < STATION; i++) {
            double time = interval.at(i) / vel01;
            length -= time * vel_sum;
            if (length > 0) {
                ans++;
            } else {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}