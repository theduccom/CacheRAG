#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define vi vector<int>
#define VS vector<string>
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pb push_back

using namespace std;

int main(){
    double x, y, z;
    while(cin >> x >> y >> z, x+y+z){
        vector<double> v;
        v.push_back(x); v.push_back(y); v.push_back(z);

        sort(all(v));
        int n;
        cin >> n;
        for(int i=0; i < n; i++){
            double r;
            cin >> r;
            if(r*2 > sqrt(pow(v[0], 2)+pow(v[1], 2))) cout << "OK" << endl;
            else cout << "NA" << endl;
        }
    }
}