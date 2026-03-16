#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string c = "0123456789";
    for(int i=0; i<n; i++) {
        string in1, in2;
        cin >> in1 >> in2;
        if(in1.size() > 80 || in2.size() > 80) {
            cout << "overflow" << endl;
            continue;
        }

        string ans = "";
        int k = 0;
        for(int j=0; j<80; j++) {
            int x = in1.size() - 1 - j;
            if(x >= 0) {
                k += in1[x] - '0';
            }
            int y = in2.size() - 1 - j;
            if(y >= 0) {
                k += in2[y] - '0';
            }
            ans = c[k%10] + ans;
            k /= 10;
        }

        if(k!=0) {
            cout << "overflow" << endl;
        } else {
            bool flag = true;
            for(int i=0; i<ans.size(); i++) {
                if(ans[i] == '0' && flag) continue;
                flag = false;
                cout << ans[i];
            }
            if(flag) cout << "0";
            cout << endl;
        }
    }
    return 0;
}