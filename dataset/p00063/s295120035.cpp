#include <iostream>
#include <string>

using namespace std;


int main(){
	int i, j, mozisu, kaisu, taisyo, amari, ans, fact;
	ans = 0;

	string str;

	while(cin >> str){
		mozisu = str.size();
		kaisu = mozisu / 2;
		taisyo = 0;
		j = 1;
	
		while(1){
			fact = mozisu;
			fact = fact % (2 * j);

			if(mozisu == 2){
				amari = 0;
				break;
			}

			else if(fact == 1){
				amari = 1;
				break;
			}

			else if(fact == 0){
				amari = 0;
				break;
			}

			j++;
		}

			if(mozisu == 1){
				taisyo = 1;
			}

			else if(amari == 1){
				for(i = 0; i < kaisu; i++){
					if(str[i] == str[mozisu - i - 1]){
						taisyo++;
					}
				}
				if(str[kaisu + 1] == str[(mozisu - 1) - (kaisu - 1)]){
					taisyo++;
				}
			}

			else if(amari == 0){
				for(i = 0; i < kaisu; i++){
					if(str[i] == str[mozisu - i - 1]){
						taisyo++;
					}
				}
			}

			if(amari == 0 && taisyo == kaisu){
				ans++;
			}

			else if(amari == 1 && taisyo == kaisu + 1){
				ans++;
			}

			str.clear();
	}

	cout << ans << endl;
	return 0;
}