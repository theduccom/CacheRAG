#include <iostream>
#include <cctype>

using namespace std;

class Parser{
    public:

    string s;
    int i, n;

    Parser(string s): s(s) {}

    int parse(){
        i = 0;
        n = s.length();
        return expr();
    }

    private:

    int expr(){
        int ret = term();
        while(s[i] != '='){
            if(s[i] == '+'){
                i++;
                ret += term();
            }else if(s[i] == '-'){
                i++;
                ret -= term();
            }else{
                break;
            }
        }
        return ret;
    }

    int term(){
        int ret = fac();
        while(i < n){
            if(s[i] == '*'){
                i++;
                ret *= fac();
            }else if(s[i] == '/'){
                i++;
                ret /= fac();
            }else{
                break;
            }
        }
        return ret;
    }

    int fac(){
        if(isdigit(s[i])) return num();
        i++;
        int ret = expr();
        // int ret = num();
        // while(s[i] != ')'){
        //     if(s[i] == '+'){
        //         i++;
        //         ret += num();
        //     }else if(s[i] =='-'){
        //         i++;
        //         ret -= num();
        //     }else{
        //         break;
        //     }
        // }
        i++;
        return ret;
    }

    int num(){
        int ret = s[i] - '0';
        i++;
        while(isdigit(s[i])){
            ret = ret * 10 + (s[i] - '0');
            i++;
        }
        return ret;
    }

};

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        Parser p = Parser(s);
        cout << p.parse() << endl;
    }
}
