#include <iostream>
using namespace std;

int main(){
    int n;

    while(cin >> n, n != 0){
        for(int i=1; i<=n; i++){
            int pm, pe, pj;
            cin >> pm >> pe >> pj;
            double all_ave = (pm+pe+pj) / 3.0;
            double me_ave = (pm+pe) / 2.0;

            if(pm == 100 || pe == 100 || pj == 100) cout << "A" << endl;
            else if(me_ave >= 90.0) cout << "A" << endl;
            else if(all_ave >= 80.0) cout << "A" << endl;
            else if(all_ave >= 70.0) cout << "B" << endl;
            else if(all_ave >= 50 && (pm >= 80) || (pe >= 80)) cout << "B" << endl;
            else cout << "C" << endl;
        }
    }
    return 0;
}