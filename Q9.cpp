
#include <iostream> 
using namespace std; 

bool isNeon(int num){
  int temp=num*num;
  int sum=0;
  while (temp!=0) {
   int rem=temp%10;
   sum+=rem;
   temp/=10;
  }
    return sum==num;
}

int main() 
{ 
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isNeon(num)) cout<<num<<" is a Neon Number."<<endl;
  else cout<<num<<" is not a Neon Number."<<endl;
  return 0; 
}
