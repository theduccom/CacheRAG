#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

typedef pair<double, double> pdd;

#define x first
#define y second


void solve(vector<pdd>& data)
{
    double area = 0.0;
    
    pdd v1, v2;

    for (int i = 0; i < static_cast<int>(data.size()) - 1; ++i) {
        v1.x = data.at(i).x - data.at(0).x;
        v1.y = data.at(i).y - data.at(0).y;
        v2.x = data.at(i + 1).x - data.at(0).x;
        v2.y = data.at(i + 1).y - data.at(0).y;

        double temp_area = abs(v1.x * v2.y - v1.y * v2.x) / 2;

        area += temp_area;
    }

    cout << area << endl;
}


int main()
{
    vector<pdd> pointData;
    
    double x, y;
    char comma;
    
    while (cin >> x >> comma >> y) {
        pointData.push_back(pdd(x, y));
    }

    solve(pointData);   

    return 0;
}
    