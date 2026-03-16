#include <bits/stdc++.h> // only for GCC

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

typedef string::const_iterator State;

class ParseError{};

//container util
//------------------------------------------
#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair

//repetition
//------------------------------------------
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
int number(State &begin);
int term(State &begin);
int expression(State &begin);
int expression(State &begin);

int number(State &begin){
    int ret = 0;

    while(isdigit(*begin)){
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }
    return ret;
}

int factor(State &begin){
    if(*begin == '('){
        begin++;
        int ret = expression(begin);
        begin++;
        return ret;
    }else {
        return number(begin);
    }
}

int term(State &begin){
    int ret = factor(begin);
    for(;;){
        if(*begin =='*'){
            begin++;
            ret *= factor(begin);
        } else if(*begin == '/'){
            begin++;
            ret /= factor(begin);
        } else {
            break;
        }
    }
    return ret;
}


int expression(State &begin){
    int ret = term(begin);

    for(;;){
        if (*begin == '+'){
            begin++;
            ret += term(begin);
        } else if(*begin == '-'){
            begin++;
            ret -= term(begin);
        } else {
            break;
        }
    }
    return ret;
}

int main(){
    int N;
    cin >> N;
    cin.ignore();
    rep(i, N){
        string s;
        getline(cin, s);

        State begin = s.begin();
        int ans = expression(begin);
        cout << ans << endl;
    }
}