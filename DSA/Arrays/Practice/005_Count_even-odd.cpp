#include<iostream>
#include<climits>
using namespace std;
int main(){
  int even;
  int odd;
  int arr[10];
  cout<<"enter the elements of arr"<<endl;
  for(int i=0;i<10;i++){
    cin>>arr[i];
  }
  for(int i=0;i<10;i++){
    if(arr[i]%2==0) even++;
    else odd++;
  }
  cout<<"even = "<<even<<endl;
  cout<<"odd = "<<odd<<endl;
  return 0;
}
