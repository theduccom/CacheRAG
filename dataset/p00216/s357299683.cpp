#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){

	for(;;){
        int w,v;

        cin>>w;


        if(w==-1)break;
        else if(w<=10)v=1150;
        else if(w<=20)v=1150+125*(w-10);
        else if(w<=30)v=2400+140*(w-20);
        else if(w>30)v=3800+160*(w-30);

        cout<<4280-v<<endl;




	}
	return 0;
}