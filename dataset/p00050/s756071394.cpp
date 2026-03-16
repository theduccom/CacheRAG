#include <bits/stdc++.h>
using namespace std;

int main(){
    string apple = "apple", peach = "peach";

    int n = 0;
    string str[1000];

    while(cin >> str[n]){
        for(int i=0;i<str[n].size();i++){
            if(str[n].substr(i, 5) == apple){
                for(int j=0;j<peach.size();j++){
                    str[n][i + j] = peach[j];
                }
            }else if(str[n].substr(i, 5) == peach){
                for(int j=0;j<apple.size();j++){
                    str[n][i + j] = apple[j];
                }
            }
        }
        n++;
    }
    for(int i=0;i<n-1;i++){
        cout << str[i] << " ";
    }
    cout << str[n - 1] << endl;

    return 0;
}
