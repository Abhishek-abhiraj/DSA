#include<iostream>
using namespace std;

int main(){
  char ch;
  cout<<"enter the character ";
  cin>>ch;
  if(ch>='a' && ch<='z'){
    cout<<ch<<" is a lowercase Alphabet";
  }
  else{
    cout<<ch<<" is a uppercase Alphabet";
  }
  return 0;
}