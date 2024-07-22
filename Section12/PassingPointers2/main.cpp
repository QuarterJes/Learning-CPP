// Copyright 2024 <Jesang Limbu>
#include <iostream>

void swap(int *a, int *b);

int main() {
  int x{100}, y{200};
  std::cout << "\nx: " << x << std::endl;
  std::cout << "y: " << y << std::endl;

  swap(&x, &y);

  std::cout << "\nx: " << x << std::endl;
  std::cout << "y: " << y << std::endl;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
