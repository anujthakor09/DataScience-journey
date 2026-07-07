#include<iostream>
#include<climits>
using namespace std;
int main(){
    int sec_Lar;
  int arr[10];
  cout<<"enter the elements of arr"<<endl;
  for(int i=0;i<10;i++){
    cin>>arr[i];
  }
  int max = INT_MIN;
  for(int i=1;i<10;i++){
    if(arr[i]>max){
      sec_Lar = max;
      max=arr[i];
    }
  }
  cout<<"the second largest number in arr is "<<sec_Lar<<endl;
  return 0;
}
