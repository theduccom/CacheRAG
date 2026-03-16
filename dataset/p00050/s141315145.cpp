#include<iostream>
#include<string>
using namespace std;

int main(void){
	string str;
	string pe="peach", ap="apple";
	string::size_type pos,pos_pe,pos_ap;
	string::size_type head;
	
	getline(cin, str);

	head = 0;
	while(1){
		pos_pe = str.find(pe,head);
		pos_ap = str.find(ap,head);
		if(pos_pe==pos_ap) break;

		if(pos_pe < pos_ap || pos_ap==NULL){
			str.replace(pos_pe, pe.size(), ap);
			head = pos_pe + pe.size();
		}else{
			str.replace(pos_ap, ap.size(), pe);
			head = pos_ap + ap.size();
		}
	}
	
	cout << str << endl;


	return 0;
}