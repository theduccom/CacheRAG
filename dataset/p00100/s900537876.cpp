#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)

int main(){
    int n;
    while (cin >> n && n){
        string a;
        long long b, c;
        map<string, long long> data;
        vector<string> id;
        rep(i, n){
            cin >> a >> b >> c;
            c *= b;
            if (data.find(a) == data.end()){
                data.insert(make_pair(a, c));
                id.push_back(a);
            }
            else{
                data[a] += c;
            }
        }

        bool NA = true;
        rep(i, id.size()){
            if (data[id[i]] >= 1000000){
                cout << id[i] << endl;
                NA = false;
            }
        }
        if (NA) cout << "NA" << endl;
    }
}