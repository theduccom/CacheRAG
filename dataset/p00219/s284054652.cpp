#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N;
    int inN;
    vector<int> vec(10,0);
    cin>>N;
    while(N){
        for(int i=0;i<N;i++){
            cin>>inN;
            vec[inN]++;
        }
        for(int i=0;i<10;i++){
            if(!vec[i]){
                cout<<"-"<<endl;
            }else{
                for(int j=0;j<vec[i];j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            vec[i]=0;
        }
        cin>>N;
    }
}