#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,i,j;
    string str;
    cin >> n;
    getline(cin,str);
    for(i=0;i<n;i++){
        getline(cin,str);
        for(j=0;j<str.size();j++){
            if(j+6 > str.size()) break;
            if(str[j] == 'H' && str[j+1] == 'o' && str[j+2] == 's' && str[j+3] == 'h' && str[j+4] == 'i' && str[j+5] =='n' && str[j+6] == 'o'){
                str[j+6] = 'a';
            }
        }
        cout << str << endl;
    }
    return 0;
}