#include <bits/stdc++.h>                                            
                                                                    
using namespace std;                                                
                                                                    
int main() {                                                        
                                                                    
    int a, b, isNA, isData= 0;                                      
                                                                    
    while(cin >> a >> b && (a || b)) {                              
                                                                    
        if(isData == 0) {                                           
            isData = 1;                                             
        } else {                                                    
            cout << endl;                                           
        }                                                           
                                                                    
        isNA = 1;                                                   
                                                                    
        for(int i = a; i <= b; ++i) {                               
            if(i == 0) {                                            
                continue;                                           
            }                                                       
            if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {      
                cout << i << endl;                                  
                isNA = 0;                                           
            }                                                       
        }                                                           
                                                                    
        if(isNA == 1) {                                             
            cout << "NA" << endl;                                   
        }                                                           
                                                                    
    }                                                               
                                                                    
}                                                                   