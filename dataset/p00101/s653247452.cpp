#include <iostream>
using namespace std;

typedef string::iterator S;
string HOSHINO("Hoshino");
int lh = HOSHINO.size();
string HOSHINA("Hoshina");
string trg;

string hoshina(string& trg){
    if( trg.size() < lh ) return trg;
    for(S it = trg.begin(); it+lh-1!=trg.end(); it++){
        string cp(it, it+lh);
        if( cp == HOSHINO ) trg.replace(it,it+lh,HOSHINA);
    }
    return trg;
}

int main(){
    int n;
    cin >> n;
    getline(cin, trg);
    while(n--){
        getline(cin, trg);
        cout << hoshina(trg) << endl;
    }
    return 0;
}