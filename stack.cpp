#include<iostream>
#include<list>
#include<deque>
#include<stack>
using namespace std;
int main(){
 // we cannot remove values in stack from start we have to remove upper values first
    stack<int> s;
    stack<int> s2;
    s.push(1);
    s.push(4);
    s.push(2);
   s2.swap(s);
  cout<< s.size()<<endl; //  s will become zero because i swap it with s2 and s2 was empty
   cout<<s2.size()<<endl;


   
}