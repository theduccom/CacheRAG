#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair

#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
    string field[10];
    while(cin >> field[0]){
        rep(i, 7) cin >> field[i+1];
        rep(i, 10) field[i] += "00000000000000000000000";

        rep(i, 8){
            rep(j, 8){
                if(field[i][j] == '1' && field[i][j+1] == '1' && field[i+1][j] == '1' && field[i+1][j+1] == '1') cout << "A" << endl;
                else if(field[i][j] == '1' && field[i+1][j] == '1' && field[i+2][j] == '1' && field[i+3][j] == '1') cout << "B" << endl;
                else if(field[i][j] == '1' && field[i][j+1] == '1' && field[i][j+2] == '1' && field[i][j+3] == '1') cout << "C" << endl;
                else if(field[i][j+1] == '1' && field[i+1][j+1] == '1' && field[i+1][j] == '1' && field[i+2][j] == '1') cout << "D" << endl;
                else if(field[i][j] == '1' && field[i][j+1] == '1' && field[i+1][j+1] == '1' && field[i+1][j+2] == '1') cout << "E" << endl;
                else if(field[i][j] == '1' && field[i+1][j] == '1' && field[i+1][j+1] == '1' && field[i+2][j+1] == '1') cout << "F" << endl;
                else if(field[i+1][j] == '1' && field[i+1][j+1] == '1' && field[i][j+1] == '1' && field[i][j+2] == '1') cout << "G" << endl;
            }
        }
    }
}