#include <iostream>
using namespace std;

int main() {
  int arr[]= {1 ,2, 3, 4, 5};
int num = 3;
  int flag = -1;
  for(int i = 0; i<sizeof(arr)/sizeof(int);i++){
    if(arr[i] == num){
      flag =i;
    }
  }
  if(flag != -1){
    cout << "Element is present at : "<<flag<<" Index";
  }else{
    cout << "Element is not present";
    
  }
}