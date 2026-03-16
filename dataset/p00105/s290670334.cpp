#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main(){
  std::string s;
  int p;
  std::map<std::string,std::vector<int> > m;
  while(std::cin>>s>>p,!std::cin.eof()){
    m[s].push_back(p);
  }
  std::map<std::string,std::vector<int> >::iterator m_it = m.begin();
  while(m_it!=m.end()){
    std::cout<<(*m_it).first<<std::endl;
    std::sort((*m_it).second.begin(),(*m_it).second.end());
    std::vector<int>::iterator v_it = (*m_it).second.begin();
    while(v_it!=(*m_it).second.end()){
      std::cout<<*v_it;
      v_it++;
      (v_it==(*m_it).second.end())?std::cout<<std::endl:std::cout<<" ";
    }
    m_it++;
  }
  return 0;
}
/*
Sample Input
style 12
even 25
introduction 3
easy 9
style 7
document 13
style 21
even 18
Output for the Sample Input
document
13
easy
9
even
18 25
introduction
3
style
7 12 21
*/