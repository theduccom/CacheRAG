#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
	
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
		string str;
		int pos = 0;
        getline(cin, str);
        while (1){
            pos = str.find("Hoshino", pos);
            if (pos == -1)  break;
            str[pos + 6] = 'a';
        }
        cout << str << endl;
    }
    return (0);
}