#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int i_max = 200000;
    queue<int> prime_temp;
    queue<int> prime;
    for(int i=2; i<i_max; i++){
        prime_temp.push(i);
    }
    while(prime_temp.empty()!=true){
        prime.push(prime_temp.front());
        //cout<<prime_temp.front()<<" "<<endl;
        int temp_top = prime_temp.front();
        int temp_size = prime_temp.size();
        for(int i=0; i<temp_size; i++){
            if(prime_temp.front()%temp_top==0){
                prime_temp.pop();
            }else{
                prime_temp.push(prime_temp.front());
                prime_temp.pop();
            }
        }
    }
    
//    while(prime.empty()!=true){
//        cout<<prime.front()<<" ";
//        prime.pop();
//    }
    
    
    int x;
    while(cin>>x){
        if(x==0)break;
        queue<int> prime_out;
        prime_out=prime;
        int out_sum=0;
        for(int i=0; i<x; i++){
            out_sum+=prime_out.front();
            prime_out.pop();
        }
        cout<<out_sum<<endl;
    }
}