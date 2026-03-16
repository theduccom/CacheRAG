#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, point, out;
    bool base[3];
    string ivent;

    cin >> n;

    for(int i = 0; i < n; ++i){

        point = 0;
        out = 0;
        memset(base, false, sizeof(base));

        while(out < 3){

            cin >> ivent;

            if(ivent == "HIT"){

                if(base[2]) point++;
                for(int j = 2; j >= 0; --j)
                    base[j] = base[j - 1];
                base[0] = true;

            }
            else if(ivent == "HOMERUN"){

                for(int j = 0; j < 3; ++j)
                    if(base[j]) ++point;
                ++point;
                memset(base, false, sizeof(base));

            }
            else if(ivent == "OUT"){

                ++out;

            }

        }

        cout << point << endl;

    }

}