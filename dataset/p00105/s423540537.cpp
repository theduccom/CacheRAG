#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX_N 101

string name[MAX_N];
int page[MAX_N];
map<string, int> m;
vector<int> vec;

int main(){
    int i = 0;
    while(cin >>name[i] >>page[i]){
        if(m.find(name[i]) == m.end()) m[name[i]] = 1;
        i++;
    }
    for(map<string, int>::iterator it = m.begin(); it != m.end(); it++){
        string searchName = (*it).first;
        cout <<searchName <<endl;
        for(int j = 0; j < i; j++){
            if(name[j] == searchName) vec.push_back(page[j]);
        }
        sort( vec.begin(), vec.end() );
        for(int i = 0; i < vec.size() - 1; i++){
            cout <<vec[i] <<" ";
        }
        cout <<vec[vec.size() - 1] <<endl;
        vec.clear();
    }
    return 0;
}