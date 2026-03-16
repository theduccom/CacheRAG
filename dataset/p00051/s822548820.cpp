#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    char c;
    int n;

    cin>>n;
    while(n--){
        vector<int> big,sml;
        int mx,mn;
        for(int i=0;i<8;i++){
            cin>>c;
            big.push_back(c-'0');
            sml.push_back(c-'0');
        }
        cin.ignore();

        sort(big.begin(),big.end(),greater<int>());
        sort(sml.begin(),sml.end());

        stringstream ss;

        for(auto x:big){
            ss<<x;
        }
        ss >> mx;

        ss.clear();

        for(auto x:sml){
            ss << x;
        }

        ss >> mn;

        cout<<mx-mn<<endl;
    }

    return 0;
}