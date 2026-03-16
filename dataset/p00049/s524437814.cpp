#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    string bl;
    int ans[4] = {0};
    while(cin >> num >> bl){
        if(bl == ",A")
                ans[0]++;
        if(bl == ",B")
                ans[1]++;
        if(bl == ",AB")
                ans[2]++;
        if(bl == ",O")
                ans[3]++;
    }
    for(int i = 0; i < 4; i++)
        cout << ans[i] << endl;
    return 0;
}