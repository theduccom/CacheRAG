#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(10);
    int sp1, sp2;
    char k;

    while(cin>>v[0]){
        double all=v[0];
        for(int i=1; i<10; i++){
            cin >>k >>v[i];
            all += v[i];
        }
        cin>>k >>sp1 >>k >>sp2;

        double hour = all/(sp1+sp2);
        double len = sp1*hour;

        int k = 0;
        while(len>0){
            len -= (double)v[k];
            k++;
        }

        cout<< k<< endl;
    }

    return 0;
}