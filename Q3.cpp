#include <stack>
#include <iostream> 
using namespace std; 

int getSize(int num){
  int size=0;
  while (num!=0) {
    size++;
    num/=10;
  }
  return size/2;
}

bool isTech(int num){

  int size=getSize(num);
  stack<int>temp;
  int first=num;

  while(size--){
    int rem=first%10;
    temp.push(rem);
    first/=10; 
  }
  
  int second=0;

  while(!temp.empty()){
    second=second*10+temp.top();
    temp.pop();
  }

  int newNum=first+second;
  return num==(newNum*newNum);
}

int main() 
{ 
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(isTech(num)) cout<<num<<" is a Tech Number."<<endl;
  else cout<<num<<" is not a Tech Number."<<endl;
  return 0; 
}
