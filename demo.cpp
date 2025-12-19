// # include <stdio.h>
//a chnge is to be done here...in place of stdio.h you have to include iostream...

# include <iostream>  //correction
using namespace std;

//as per the request i am writing a program on checking weather a number is odd or even

void check_odd_even(int x){
  if(x%2==0){
    cout<<"even number"<<endl;
  }
  else{
    cout<<"odd number"<<endl;
  }
}

int main(){
  // cout<<"hello..."<<endl;
  // cout<<"i am learning python"<<endl;

  //calling the function
  check_odd_even(56);

  return 0;
}
