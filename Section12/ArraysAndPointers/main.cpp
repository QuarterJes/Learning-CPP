// Copyright 2024 <Jesang Limbu>
#include <iostream>

int main() {
  int scores[]{100, 95, 89};

  std::cout << "Value of scores: " << scores << std::endl;

  int *score_ptr{scores};
  std::cout << "Value of score pointer: " << score_ptr << std::endl;

  std::cout
      << "\n================ Array Subscript Notation ===================="
      << std::endl;
  std::cout << scores[0] << std::endl;
  std::cout << scores[1] << std::endl;
  std::cout << scores[2] << std::endl;

  std::cout
      << "\n================ Pointer Subscript Notation ===================="
      << std::endl;
  std::cout << score_ptr[0] << std::endl;
  std::cout << score_ptr[1] << std::endl;
  std::cout << score_ptr[2] << std::endl;

  std::cout << "\n================ Pointer Offset Notation ===================="
            << std::endl;
  std::cout << *score_ptr << std::endl;
  std::cout << *(score_ptr + 1) << std::endl;
  std::cout << *(score_ptr + 2) << std::endl;

  std::cout << "\n================ Array Offset Notation ===================="
            << std::endl;
  std::cout << *scores << std::endl;
  std::cout << *(scores + 1) << std::endl;
  std::cout << *(scores + 2) << std::endl;

  std::cout << std::endl;
  return 0;
}
