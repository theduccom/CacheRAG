#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
 
using namespace std;
#define rep(i,j) for(int i = 0; i < (j); i++)
int main(){
    map< string, vector<int> > data;
    string str;
    int page;
    while(cin >> str >> page){
        data[str].push_back(page);
    }
    map< string, vector<int> >::iterator it = data.begin();
    while(it != data.end()){
        cout << (*it).first << endl;
        int len = (*it).second.size();
        if(len == 1)cout << (*it).second[0] << endl;
        else{
            sort((*it).second.begin(),(*it).second.end());
            rep(i,len-1){
                cout << (*it).second[i] << " ";
            }
            cout << (*it).second[len-1] << endl;
        }
        it++;
    }
    return 0;
}