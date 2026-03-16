#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
        int n;
        cin >> n;
        while(n--){
                int m;
                cin >> m;
                int list[8];
                for(int i = 0; i < 8; i++){
                        list[i] = m%10;
                        m /= 10; 
                }   
                sort(list, list+8);
                int _list[8];
                for(int i = 0; i < 8; i++){
                        _list[i] = list[i]-list[7-i];
                }   
                for(int i = 0; i < 7; i++){
                        if(_list[i] < 0){ 
                                _list[i] += 10; 
                                _list[i+1]--;
                        }   
                }   
                int idx = 7;
                while(!_list[idx]) idx--;
                if(idx < 0){ 
                        cout << 0 << endl;
                }else{
                        while(idx+1){
                                cout << _list[idx--];
                        }   
                        cout << endl;
                }   
        }   
}