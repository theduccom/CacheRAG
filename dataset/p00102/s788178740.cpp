#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main(){
    int n,m;
    while(cin>>n,n){
        vector<vector<int> >vec;
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                cin>>m;
                v.push_back(m);
            }
            vec.push_back(v);
        }
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<n;j++)
                s+=vec[i][j];
            vec[i].push_back(s);
        }
        vector<int>v;
        for(int i=0;i<n+1;i++){
            int s=0;
            for(int j=0;j<n;j++)
                s+=vec[j][i];
            v.push_back(s);
        }
        vec.push_back(v);
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++)
                cout<< setfill (' ') << setw (5)<<vec[i][j];
            cout<<endl;
        }
    }
}