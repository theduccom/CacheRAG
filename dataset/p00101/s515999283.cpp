#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();//?
    while(n--){
        string s;
        getline(cin,s);
        while((s.find("Hoshino")!= -1)){
            s.replace(s.find("Hoshino"),7,"Hoshina");
            //replace(??????,??????????????°,???????????????)
        }
        cout<<s<<endl;
    }
    
    return 0;
}