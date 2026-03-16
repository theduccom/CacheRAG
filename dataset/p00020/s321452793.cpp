#include <iostream>

using namespace std;
int main(void){
    // Here your code !
string c;
getline(cin,c);

for(int i=0;i<c.size();i++){
    if('a'<=c[i]&&c[i]<='z') c[i]=c[i]-'a'+'A';
    cout<<c[i];
}
cout<<endl;
}