#include <iostream>
#include <string>
#include <math.h>


using namespace std;



int main(){
    string in_str,out_str;
    
    while(getline(cin,in_str)){
        out_str=in_str;
        int beg=0;
        
        while(1){
            int beg = in_str.find("apple");
            if(beg==-1){
                break;
            }else{
                in_str[beg]='*';
                out_str[beg]='p';
                beg++;
                in_str[beg]='*';
                out_str[beg]='e';
                beg++;
                in_str[beg]='*';
                out_str[beg]='a';
                beg++;
                in_str[beg]='*';
                out_str[beg]='c';
                beg++;
                in_str[beg]='*';
                out_str[beg]='h';
            }
            beg = in_str.find("peach");
            if(beg==-1){
                break;
            }else{
                in_str[beg]='*';
                out_str[beg]='a';
                beg++;
                in_str[beg]='*';
                out_str[beg]='p';
                beg++;
                in_str[beg]='*';
                out_str[beg]='p';
                beg++;
                in_str[beg]='*';
                out_str[beg]='l';
                beg++;
                in_str[beg]='*';
                out_str[beg]='e';
            }
        }
        cout<<out_str<<endl;
    }
    
}