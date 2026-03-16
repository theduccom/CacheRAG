#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    vector<int> count(4);
    count[0] = 0;
    count[1] = 0;
    count[2] = 0;
    count[3] = 0;

    while(cin >> s){
        string::size_type comma = s.find(",");
        string bloodtype = s.substr(comma+1);
        if(bloodtype == "A"){
            count[0]++;
        }
        if(bloodtype == "B"){
            count[1]++;
        }
        if(bloodtype == "AB"){
            count[2]++;
        }
        if(bloodtype == "O"){
            count[3]++;
        }
    }

    for(int i=0; i<4; i++){
        cout << count[i] << endl;
    }

    return 0;
}