#include <iostream>

using namespace std;

int *create_array(size_t size, int init = 0) {
  int *ptr {nullptr};
  size_t i; // use sizetype so the array goes to the address of the next element
            // (some data types take more than 1 unit of space in the memory)

  ptr = new int[size];
  for (i = 0; i < size; ++i)
    *(ptr + i) = init;
  return ptr;
}

void display(const int *const array, size_t size) {
  size_t i;
  for (i = 0; i < size; ++i)
    cout << *(array + i) << " ";
  cout << endl;
}


int main() {
  int *my_array {nullptr};
  size_t size {};
  int init {};

  cout << "Enter the size of the array: ";
  cin >> size;
  cout << "Enter the initial value of all elements: ";
  cin >> init;
  my_array = create_array(size, init);
  cout << "---------------------" << endl;
  display(my_array, size);

  delete [] my_array;
  return 0;
}
