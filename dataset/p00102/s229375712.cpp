#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
using namespace std;

int main(){
    int n;

    while(cin>>n,n){
        vector<vector<int>> v(n);
        vector<int> lv(n+1,0);

        for(auto &x:v){
            x.resize(n);
            for(auto &y:x){
                int t;
                cin>>t;
                y=t;
            }
        }

        for(auto &x:v){
            int sum=0;
            for(auto y:x){
                sum+=y;
            }
            x.push_back(sum);

            for(int i=0;i<=n;i++){
                lv[i]+=x[i];
            }
        }

            for(auto x:v){
                for(auto y:x){
                        cout<<setw(5)<<y;
                }
                cout<<endl;
            }

            for(auto x:lv){
                cout<<setw(5)<<x;
            }

            cout<<endl;
    }

    return 0;
}