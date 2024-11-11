#include <cmath>
#include <iostream> 
using namespace std; 


bool isDudeney(int num){
  int sum=0;
  int temp=num;
  while(temp!=0){
    int rem=temp%10;
    sum+=rem;
    temp/=10;
  }
  return sum==cbrt(num);
}

int main() 
{  
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isDudeney(num)) cout<<num<<" is a Dudeney Number."<<endl;
  else cout<<num<<" is not a Dudeney Number."<<endl;
  return 0; 
}
