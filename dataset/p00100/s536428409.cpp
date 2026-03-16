#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    while (1) {
        int id;
        long long int ids[4000],n,cost,amount;
        bool exist = false;
        vector<int> num;
        cin >> n;
        if (n==0) break;
        for(int i=0;i<4000;i++) ids[i]=-1;
        for(int i=0;i<n;i++){
            cin >> id >> cost >> amount;
            if(ids[id]==-1){
                num.push_back(id);
                ids[id]=0;
            }
            ids[id]+=cost*amount;
        }
        for(int i=0;i<num.size();i++){
            if(ids[num[i]]>=1000000){
                cout << num[i] << endl;
                exist = true;
            }
        }
        if(!exist) cout << "NA" << endl;
    }
    
    return 0;
}