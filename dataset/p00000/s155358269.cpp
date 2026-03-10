#include <iostream>

using namespace std;
int main(int argc, char const* argv[])
{
    int i;
    for (i = 1; i < 10; i++) {
        int j;
        for (j = 1; j < 10; j++) {
            cout << i <<"x" << j<<"="<<i*j<<endl;
        }
    }
    return 0;
}