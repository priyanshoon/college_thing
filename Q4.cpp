
#include <iostream> 
using namespace std; 

bool isBuzz(int num){
  return (num%10==7)||(num%7==0); 
}

int main() 
{ 
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isBuzz(num)) cout<<num<<" is a Buzz Number."<<endl;
  else cout<<num<<" is not a Buzz Number."<<endl;
  return 0; 
}
