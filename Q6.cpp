#include <iostream>
using namespace std;

int getTribo(int n){
  if(n==0||n==1||n==2)return 0;
  else if (n==3)return 1; 
  return getTribo(n-1)+getTribo(n-2)+getTribo(n-3); 
}

void printTribo(int n)
{
  for (int i = 1; i < n; i++)
    cout << getTribo(i) << " ";
}

int main(){
  int num;
  cout<<"Enter a number:";
  cin>>num;
  printTribo(num);
  cout<<endl;
  return 0;
}
