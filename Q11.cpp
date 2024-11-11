#include <iostream> 
#include <math.h> 
using namespace std; 

bool isPronic(int x) 
{ 
  for (int i = 0; i <= (int)(sqrt(x));i++){ 
    if (x == i * (i + 1)) return true; 
  }
  return false; 
} 

int main() 
{  
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isPronic(num)) cout<<num<<" is a pronic Number."<<endl;
  else cout<<num<<" is not a pronic Number."<<endl;
  return 0; 
}
