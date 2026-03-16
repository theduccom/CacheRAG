#include <iostream>
#include <vector>
 
using namespace std;
 
const long long Target = 1000000;
 
struct Shain {
    int no;
    long long sum;
};
 
int main( void )
{
    vector<Shain> shain;
    long long n;
    while(cin >> n, n) {
        shain.clear();
        while(n--) {
            long long no, kin, num;
            cin >> no >> kin >> num;
            bool hit = false;
            vector<Shain>::iterator it = shain.begin();
            while(it != shain.end()) {
                if(it->no == no) {
                    it->sum += (kin * num);
                    hit = true;
                    break;
                }
                ++it;
            }
            if(!hit) {
                Shain tmp;
                tmp.no = no;
                tmp.sum = (kin * num);
                shain.push_back(tmp);
            }
        }
        bool hit = false;
        vector<Shain>::iterator it = shain.begin();
        while(it != shain.end()) {
            if(it->sum >= Target) {
                cout << it->no << endl;
                hit = true;
            }
            ++it;
        }
        if(!hit)
            cout << "NA" << endl;
    }
    return 0;
}