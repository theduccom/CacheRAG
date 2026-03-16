#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>


using namespace std;



int main(){
    char x[8];
    int temp;
    cin>>temp;
    while(cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4]>>x[5]>>x[6]>>x[7]){
        int max=0;
        int min=0;
        int num[8];
        for(int i=0; i<8; i++)num[i]=x[i]-'0';
        sort(num, num+8);
        for(int i=7; i>=0; i--){
            max*=10;
            max+=num[i];
        }
        for(int i=0; i<8; i++){
            min*=10;
            min+=num[i];
        }
        cout<<max-min<<endl;
    }
}