#include <cstdio>
#include <map>
#include <string>

using namespace std;

int main()
{
	map <string, int> list;
	
	list["I"] = 1;
	list["V"] = 5;
	list["X"] = 10;
	list["L"] = 50;
	list["C"] = 100;
	list["D"] = 500;
	list["M"] = 1000;
	list["N"] = 0;
		
	char s[10001];
	while(scanf("%s", s) != EOF){
		string str = s;
		string str_next = s;
		
		int len = str.size();
		int sum = 0;
		
		
		for(int i = 0; i < len; i++){
			str = s[i];
			str_next = s[i+1];
			
			if(list[str] < list[str_next]){
				sum += list[str_next] - list[str];
				i++;
			}
			
			else sum += list[str];
		}
		
		printf("%d\n", sum);
	}
}