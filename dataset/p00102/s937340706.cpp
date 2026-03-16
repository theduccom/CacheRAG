#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;

#define REP(i, m, n) for (int i = static_cast<int>(m); i < static_cast<int>(n); ++i)

int main()
{
    
    

    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) break;
        
        VVI vvi;

        REP(i, 0, n) {
            vvi.push_back( vector<int>() );
            int sum = 0;
            
            REP(j, 0, n) {
                int in;
                std::cin >> in;
                vvi[i].push_back(in);
                sum += in;
            }
            vvi[i].push_back(sum);
        }

        vvi.push_back( vector<int>() );
        REP(i, 0, n + 1) {
            int sum = 0;
            
            REP(j, 0, n) {
                sum += vvi[j][i];
            }
            
            vvi[n].push_back(sum);
        }
        
        
        REP(i, 0, vvi.size()) {
            REP(j, 0, vvi[i].size()) {
                std::cout << std::setw(5) << vvi[i][j];
            }
            std::cout << std::endl;
        }
    }
    return 0;
}

    