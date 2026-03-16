#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    vector<int> v(5);
    char ch;
    while(cin>>v[0]>>ch>>v[1]>>ch>>v[2]>>ch>>v[3]>>ch>>v[4]) {
        sort(v.begin(), v.end());
        int n = 0;
        REP(i,4) {
            For(j,i+1,5) {
                if (v[i] == v[j]) n++;
            }
        }
        
        switch(n) {
            case 1:
                cout << "one pair" << endl;
                break;
            case 2:
                cout << "two pair" << endl;
                break;
            case 3:
                cout << "three card" << endl;
                break;
            case 4:
                cout << "full house" << endl;
                break;
            case 6:
                cout << "four card" << endl;
                break;
            default:
                if (v[0] == v[4]-4 || (v[0] == 1 && v[1] == 10)) {
                    cout << "straight" << endl;
                }else {
                    cout << "null" << endl;
                }
                break;
        }
    }
    return 0;
}