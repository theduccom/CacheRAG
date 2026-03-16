#include <bits/stdc++.h>
using namespace std;
const int dx[]={0,1,0,-1,1,-1,-1,1};
const int dy[]={-1,0,1,0,1,1,-1,-1};
const int INF = 1<<30;
const double EPS = 1e-8;
#define PB push_back
#define mk make_pair
#define fi first
#define se second
#define ll long long
#define reps(i,j,k) for(int i = (j); i < (k); i++)
#define rep(i,j) reps(i,0,j)
#define MOD 1000000007
typedef pair<int,int> Pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
string s;
int INDEX;
int number();
int factor();
int term();
int expr();
int number(){
    int n = s[INDEX] - '0';
    INDEX++;
    while(isdigit(s[INDEX])){
        n = n*10 + s[INDEX] - '0';
        INDEX++;
    }
    return n;
}
int factor(){
    if(isdigit(s[INDEX])) return number();
    INDEX++;
    int ret = expr();
    INDEX++;
    return ret;
}
int term(){
    int val = factor();
    while(s[INDEX] == '*' || s[INDEX] == '/'){
        char op = s[INDEX];
        INDEX++;
        int tmp = factor();
        if(op == '*') val *= tmp;
        else val /= tmp;
    }
    return val;
}
int expr(){
    int val = term();
    while(s[INDEX] == '+' || s[INDEX] == '-'){
        char op = s[INDEX];
        INDEX++;
        int tmp = term();
        if(op == '+')val += tmp;
        else val -= tmp;
    }
    return val;
}
int main(){
    int N;
    cin >> N;
    while(N--){
        INDEX = 0;
        cin >> s;
        cout << expr() << "\n";
    }
    return 0;
}