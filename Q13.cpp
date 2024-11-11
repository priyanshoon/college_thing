#include <iostream> 
using namespace std; 


bool isHarshad(int num){
  int sum=0;
  int temp=num;
  while(temp!=0){
    int rem=temp%10;
    sum+=rem;
    temp/=10;
  }
  return num%sum==0;
}

bool isMagic(int n) 
{ 
    int sum = 0; 
    while (n > 0 || sum > 9) 
    { 
        if (n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    } 
    return (sum == 1); 
} 

bool isHarshadMagic(int num){

  bool harsh=isHarshad(num);
  bool magic=isMagic(num);

  return harsh && magic;
}
int main() 
{  
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isHarshadMagic(num)) cout<<num<<" is a Harshad Magic Number."<<endl;
  else cout<<num<<" is not a Harshad Magic Number."<<endl;
  return 0; 
}
