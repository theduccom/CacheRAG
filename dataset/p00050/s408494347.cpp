#include <iostream>
#include <vector>
#include <string>
int main(){
  std::string s;
  getline(std::cin,s);
  std::vector<int> apv,ppv;
  int apos=0,ppos=0;
  while(apos=s.find("apple",apos),ppos=s.find("peach",ppos),apos!=std::string::npos||ppos!=std::string::npos){
    if(apos!=std::string::npos)
      apv.push_back(apos),apos+=5;
    if(ppos!=std::string::npos)
      ppv.push_back(ppos),ppos+=5;
  }
  std::vector<int>::iterator it=apv.begin();
  while(it!=apv.end())
    s.replace(*it,5,"peach"),it++;
  it=ppv.begin();
  while(it!=ppv.end())
    s.replace(*it,5,"apple"),it++;
  std::cout<<s<<std::endl;
  return 0;
}