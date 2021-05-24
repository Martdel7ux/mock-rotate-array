//
//  main.cpp
//  mock rotate array
//
//  Created by MARTIN on 22/05/2021.
//

#include <iostream>

using namespace std;

void Rotate(int arr[], int size, int k);

int main() {
  int k;
  int arr[9] ={1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = 9;

  cout << "Enter a number to shift an array by:" << endl;
  cin >> k;

  Rotate(arr, k, size);

  for(int i = 0; i < size; i++)
    cout << arr[i];

  return 0;
}
void Rotate(int array[], int k, int size)
{
  for(int i = 0; i < k; i++){
    int temp = array[size-1];
    for(int i = (size-1); i > 0; i--){
      array[i] = array[i-1];
    }
    array[0] = temp;
      
  }














}
