#include <iostream>
#include <string>
using namespace std;

int main()
{
    string src,dist;
    string word[] = {"apple","peach"};
    getline(cin,src);
    dist = src;
    for(int i = 0; i < 2; ++i){
        string::size_type pos = src.find(word[i]);
        while(pos != string::npos){
            dist.replace(pos,5,word[1-i]);
            pos = src.find(word[i],pos + 1);
        }
    }
    cout << dist << endl;
}