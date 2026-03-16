#include<iostream>
#include<string>
#include <sstream>


using namespace std;

int main()
{
  int n;
  cin>>n;
  for(;n--;)
    {
      string s1;
      cin>>s1;
      string s2=s1;
      for(int i=0;i<s1.size();i++)
	for(int j=0;j<s1.size();j++)
	  {
	    if(s1[i]<s1[j])
	      {
		char a;
		a=s1[i];
		s1[i]=s1[j];
		s1[j]=a;
	      }
	    if(s2[i]>s2[j])
	      {
		char a;
		a=s2[i];
		s2[i]=s2[j];
		s2[j]=a;
	      }
	  }
      stringstream istr(s1);
      int i,j;
      istr >>i;
      istr.clear();
      istr.str(s2);
      istr>>j;
      //      cout<<s1<<endl;
      //  cout<<s2<<endl;
      cout<<j-i<<endl;
    }
  
}