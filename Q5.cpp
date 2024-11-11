#include <iostream> 
#include <math.h>
using namespace std; 

int getSize(int num){
  int size=0;
  while (num!=0) {
    size++;
    num/=10;
  }
  return size;
}

bool isDisarium(int num){
  int size=getSize(num);
  int sum=0;
  int temp=num;
  while(temp!=0){
    int rem=temp%10;
    sum+=pow(rem,size--);
    temp/=10;
  }
  return sum==num ;
}

int main() 
{  
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isDisarium(num)) cout<<num<<" is a Disarium Number."<<endl;
  else cout<<num<<" is not a Disarium Number."<<endl;
  return 0; 
}
