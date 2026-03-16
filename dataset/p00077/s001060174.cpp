#include<iostream>
using namespace std;
#include<string>

int main() {
   string s;
   while (cin >> s){
       for (int i=0; i<s.size(); i++){
           if (s[i] == '@'){
               for (int j=s[i+1]; j>'0'; j--){
                   cout << s[i+2];
               }
               i+=2;
           }
           else {
               cout << s[i];

           }
            
       }
       cout << endl;

   }return 0;
}
