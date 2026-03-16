#include <iostream>
using namespace std;

int main(){
    int n;
    while( cin >> n, n ){
        int m_id, max_dist = 0, id, d1, d2;
        while( n-- > 0 ){
            cin >> id >> d1 >> d2;
            if( d1 + d2 > max_dist ){
                m_id = id;
                max_dist = d1 + d2;
            }
        }
        cout << m_id << ' ' << max_dist << endl;
    }
    return 0;
}