
#include <iostream> 
using namespace std; 

bool isIncreasing(int num){
  int next=num%10;
  int temp=num/10;
  while (temp!=0) {
   int prev=temp%10; 
   if(prev>next)return false;
   next=prev;
   temp/=10;
  }
  return true;
}

bool isDecreasing(int num){
  int next=num%10;
  int temp=num/10;
  while (temp!=0) {
   int prev=temp%10; 
   if(prev<next)return false;
   next=prev;
   temp/=10;
  }
  return true;
}

bool isBouncy(int num){

bool incr=isIncreasing(num);
bool decr=isDecreasing(num);
return incr||decr; 

}

int main() 
{ 
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(!isBouncy(num)) cout<<num<<" is a Bouncy Number."<<endl;
  else cout<<num<<" is not a Bouncy Number."<<endl;
  return 0; 
}
