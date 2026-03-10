#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

template <class T> int streamvar(std::istream& in, T& var)
{
    if (!in) {
        return 1;
    }
    in >> var;
    if (in.fail()) {
        return 1;
    }
    return 0;
}
template <class T> int streamvec(std::istream& in, std::vector<T> &v)
{
    v.clear();
    string s;

    if (!in) {
        return 1;
    }
    getline(in, s);
    if (in.fail()) {
        return 1;
    }
    istringstream is(s);
    while (1) {
        T tmp;
        is >> tmp;
        if (is.fail())
            break;
        v.push_back(tmp);
    }
    return 0;
}

int main(void)
{
    for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
        cout << i << "x" << j << "=" << i*j << endl;
    }
    }
    return 0;
}