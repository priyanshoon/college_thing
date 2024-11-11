
#include <iostream> 
using namespace std; 

bool isSpy(int num){
  int sum=0,product=1;
  int temp=num;
  while(temp!=0){
    int rem=temp%10;
    sum+=rem;
    product*=rem;
    temp/=10;
  }
  return sum==product;
}

int main() 
{ 
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isSpy(num)) cout<<num<<" is a spy Number."<<endl;
  else cout<<num<<" is not a spy Number."<<endl;
  return 0; 
} 
