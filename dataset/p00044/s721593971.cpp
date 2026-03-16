#include <iostream>

using namespace std;

int main(){
        bool list[100001];
        for(int i = 2; i*i <= 100000; i++){
                for(int j = 2; !list[i] && i*j <= 100000; j++){
                        list[i*j] = true;
                }   
        }   
        int n;
        while(cin >> n){ 
                int min = n;
                while(list[--min]);
                int max = n;
                while(list[++max]);
                cout << min << " " << max << endl;
        }   
}