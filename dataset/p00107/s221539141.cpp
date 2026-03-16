#include <iostream>
using namespace std;

int main(){
    int csize[3], n, t;
    bool f;
    while(1){
        f = false;
        for(int i = 0;i < 3;++i){
            cin >> csize[i];
            f = f || csize[i] != 0;
        }
        if(!f) break;
        cin >> n;
        for(int k = 0;k < n;++k){
            cin >> t;
            f = false;
            for(int i = 0;i < 3 && !f;++i){
                for(int j = i + 1;j < 3 && !f;++j){
                    f = f || csize[i] * csize[i] + csize[j] * csize[j] < 4 * t * t;
                }
            }
            if(f) cout << "OK" << endl;
            else cout << "NA" << endl;
        }
    }
}