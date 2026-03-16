#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <fstream>
#include <sstream>

using namespace std;


string w,p;

void f_output(string p){
    int output[101]={0};
    
    stringstream stream;
    stream<<p;
    int x;
    int count=0;
    while(stream>>x){
        output[count]=x;
        count++;
    }
    
    sort(output, output+count);
    cout<<output[0];
    for(int i=1; i<count; i++)cout<<" "<<output[i];
    cout<<endl;
}


int main(){
    map<string, string> book;
    
    while(cin>>w>>p){
        if(book.find(w)==book.end()){
            book[w]=p;
        }else{
            book[w]=book[w]+" "+p;
        }
    }
    
    for (map<string, string>::iterator itr = book.begin(); itr != book.end(); itr++)
	{
		// キーを出力
		cout << itr->first << endl;
		// 値を出力
		f_output(itr->second);
	}
    
}

/*
int main()
{
    
    string w="123 222";
    stringstream stream;
    stream<<w;
    int x;
    while(stream>>x){
        cout<<x<<endl;
    }
    

}
*/