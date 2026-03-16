#include<iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;

int main()
{
    char blood[3];
    map<string,int> count;
    while(scanf("%*d,%s",blood)!=EOF){
        count[blood]++;
    }
    cout<<count["A"]<<endl<<count["B"]<<endl<<count["AB"]<<endl<<count["O"]<<endl;
    return 0;
}