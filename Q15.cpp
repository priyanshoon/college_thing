#include <iostream> 
#include <math.h>
using namespace std; 


bool isNiven(int num){
  int sum=0;
  int temp=num;
  while(temp!=0){
    int rem=temp%10;
    sum+=rem;
    temp/=10;
  }
  return num%sum==0;
}

int main() 
{  
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isNiven(num)) cout<<num<<" is a Niven Number."<<endl;
  else cout<<num<<" is not a Niven Number."<<endl;
  return 0; 
}
