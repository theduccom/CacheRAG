#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string add(string a, string b){
//    cout << a << endl;
//    cout << b << endl;
    while(a.size() < b.size()) a.insert(0, "0");
    while(b.size() < a.size()) b.insert(0, "0");
//    cout << a << endl;
//    cout << b << endl;
    int n = a.size();
    string res(n, ' ');
    for (int i = n - 1, d = 0; i >= 0; --i){
        int p = a[i] - '0';
        int q = b[i] - '0';
        int r = p + q + d;
        d = r / 10;
        res[i] = r % 10 + '0';
        if (i == 0 && d != 0) res.insert(0, string(1, d + '0'));
//        cout << res << endl;
    }
    return res;
}

int main(){
    int Tc;
    cin >> Tc;
    while(Tc--) {
        string a, b;
        cin >> a >> b;
        string tmp = add(a, b);
        if(tmp.size() > 80) cout << "overflow" << endl;
        else cout << tmp << endl;
    }
    return 0;
}