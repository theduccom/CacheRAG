//0017 Caesar Chipher

//es²ÆÉAAt@xbgAXy[XAsIhAüsªÜÜêéÅå80¶Ì¶ñª^¦çêé
//µ½ÃÉÍAthe,this,thatÌ¢¸ê©ªK¸ÜÜêé
//EOFªüÍ³êéÜÅAµ½¶ñðoÍ¹æ

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string str;
	//óàÜÞêsð¾é½ßÉgetline()AÈºcin.getline(str)ªÅ«È¢ñ¾
	while( getline(cin, str) )
	{
		int i;
		int s = str.size();
		const string::size_type N = string::npos;
		while( str.find("the")==N && str.find("this")==N && str.find("that")==N )
		{
			for(i = 0; i < s; i++)
			{
				if(isalpha(str[i]))
				{
					str[i] = (str[i]-'a'+1)%26+'a';
				}
			}
		}
		cout << str << endl;
	}
	return 0;
}