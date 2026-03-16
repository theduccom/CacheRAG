#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;cin>>N;
	for(int i=0; i<N; i++)
	{
		string a,b;
		cin>>a>>b;
		if((int)a.length()<=80 && (int)b.length()<=80 )
		{
			while((int)a.length()<81)
				a = "0"+a;
			while((int)b.length()<81)
				b = "0"+b;
			string c(81,'0');
			for ( int i=80; i>=0; i-- )
			{
				int t = a[i]-'0'+b[i]-'0'+c[i]-'0';
				c[i]='0'+t%10;
				if(t>=10)
					c[i-1]=t/10+'0';
			}
			if ( c[0]=='0')
			{
				int p=0;
				while(c[p]=='0')
					p++;
				if(c[p]=='\0')
					cout << "0" <<endl;
				else
					cout<<c.c_str()+p<<endl;
			}
			else
				cout << "overflow" << endl;


		}
		else
			cout << "overflow" << endl;
	}
	return 0;
}