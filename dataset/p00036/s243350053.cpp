#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

char a[10][10];

bool is_a(int i, int j) {
    return (a[i][j+1]=='1'&&a[i+1][j]=='1'&&a[i+1][j+1]=='1');
}
bool is_b(int i, int j) {
    return (a[i+1][j]=='1'&&a[i+2][j]=='1'&&a[i+3][j]=='1');
}
bool is_c(int i, int j) {
    return (a[i][j+1]=='1'&&a[i][j+2]=='1'&&a[i][j+3]=='1');
}
bool is_d(int i, int j) {
    return (a[i+1][j]=='1'&&a[i+1][j-1]=='1'&&a[i+2][j-1]=='1');
}
bool is_e(int i, int j) {
    return (a[i][j+1]=='1'&&a[i+1][j+1]=='1'&&a[i+1][j+2]=='1');
}
bool is_f(int i, int j) {
    return (a[i+1][j]=='1'&&a[i+1][j+1]=='1'&&a[i+2][j+1]=='1');
}
bool is_g(int i, int j) {
    return (a[i][j+1]=='1'&&a[i+1][j]=='1'&&a[i+1][j-1]=='1');
}

int main() {
    while(cin >> a[0]) {
        FOR(i,1,8) cin >> a[i];
        //rep(i,8) cout << a[i] << endl;
        rep(i,8) rep(j,8) {
            if(a[i][j] == '1') {
                if(is_a(i,j)) cout<<"A"<<endl;
                if(is_b(i,j)) cout<<"B"<<endl;
                if(is_c(i,j)) cout<<"C"<<endl;
                if(is_d(i,j)) cout<<"D"<<endl;
                if(is_e(i,j)) cout<<"E"<<endl;
                if(is_f(i,j)) cout<<"F"<<endl;
                if(is_g(i,j)) cout<<"G"<<endl;
            }
        }
    }

    return 0;
}