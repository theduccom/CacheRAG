#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string str = "";
    vector<string::size_type> peach;
    vector<string::size_type> apple;
    getline(cin, str);
    string::size_type pos;
    string find_str = "apple";
    for(pos=str.find(find_str); pos!=string::npos; pos=str.find(find_str, find_str.length()+pos)){
        apple.push_back(pos);
    }
    find_str = "peach";
    for(pos=str.find(find_str); pos!=string::npos; pos=str.find(find_str, find_str.length()+pos)){
        peach.push_back(pos);
    }
    for(int i=0; i<peach.size(); i++){
        str.replace(peach[i], 5, "apple");
    }
    for(int i=0; i<apple.size(); i++){
        str.replace(apple[i], 5, "peach");
    }
    cout << str << endl;
    return 0;
}