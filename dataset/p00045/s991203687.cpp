#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> price;
vector<int> count;
int main() {
    int p, c;
    int dc = 0; // data set count
    char dm;    // dummy char
    while (cin >> p >> dm >> c) {
        price.push_back(p);
        count.push_back(c);
        dc++;
    }
    int sum = 0;
    for (int i = 0; i < dc; i++) 
        sum += price[i] * count[i];

    int sum_of_count = 0;
    for (int i = 0; i < dc; i++) 
        sum_of_count += count[i];
    double average = round( (double)sum_of_count / dc );

    cout << sum << endl << average << endl;
    return 0;
}