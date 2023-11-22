reversing an array 
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{

  char str[] = "JATIN";
  
    stack<char>s;
  

  for(int i = 0; i<=9; i++ ){
    s.push(str[i]);
  }

  while(!s.empty()){
    cout<<s.top();
    s.pop();
  }
