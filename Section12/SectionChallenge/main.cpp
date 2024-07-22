/*
Post-game analysis: I forgot to use const for the pointers (added that in)
I also should've used size_t rather than an integer type for the size
*/



#include <iostream>
#include <string>

using namespace std;

int *apply_all(const int *const arr1, const int arr1_size, const int  *const arr2, const int arr2_size);
void print(const int *const arr, const int size);
int find_size(int arr[]);

int main() {
  int arr1[] {1, 2, 3, 4, 5};
  int arr2[] {10, 20, 30};
  int *results = apply_all(arr1, 5, arr2, 3);
  
  cout << "Array 1: ";
  print(arr1, 5);
  cout << "Array 2: ";
  print(arr2, 3);
  cout << "Results: ";
  print(results, 5*3);

  delete [] results;

  cout << endl;
  return 0;
}

int *apply_all(const int *const arr1, const int arr1_size, const int *const arr2, const int arr2_size) {
  int size {0};
  int i, j, k {};
  k = 0;
  int *new_arr {nullptr};
  size = arr1_size * arr2_size;
  new_arr = new int[size];
  for (i = 0; i < arr2_size; ++i) {
    for (j = 0; j < arr1_size; ++j) {
      new_arr[k] = arr1[j] * arr2[i];
      ++k;
    }
  }

  return new_arr;
}

void print(const int *const arr, const int size) {
  cout << "[ ";
  for (size_t i{0}; i < size; ++i)
    cout << *(arr + i) << " ";
  cout << "]" << endl;
}
