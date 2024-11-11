#include <iostream> 
using namespace std; 

bool isDuck(int num){
  while(num!=0){
    int rem=num%10;
    if(rem==0)return true;
    num/=10;
  }
  return false;
}

int main() 
{  
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isDuck(num)) cout<<num<<" is a Duck Number."<<endl;
  else cout<<num<<" is not a Duck Number."<<endl;
  return 0; 
} 
