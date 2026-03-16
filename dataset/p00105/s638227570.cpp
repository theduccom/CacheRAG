 #include<iostream>
 #include<stdio.h>
 #include<string>
 #include<math.h>
 #include<iomanip>
 #include<algorithm>
 #include<string.h>
 #include<cctype>
 #include<map>
 #include<set>
 #include<vector>
 #include<sstream>
 #include<stack>
 #include<queue>
 
 using namespace std;
 
 
 
 int main()
 {
   map<string,set<int> > mm;
   map<string,set<int> >::iterator iter;
   string s;
   int num;
   while(cin>>s>>num)
   {
     mm[s].insert(num);
     if(num==0) break;                  
   }
   for(iter=mm.begin();iter!=mm.end();++iter)
   {
     cout<<iter->first<<endl;
     set<int>::iterator iter2;
     for(iter2=(iter->second).begin();iter2!=(iter->second).end();++iter2)
     {
       if(iter2==((*iter).second).begin()) cout<<*iter2;
       else cout<<" "<<*iter2;                                                                     
     }                   
     cout<<endl;                      
   }
   //while(1);
   return 0;
 }