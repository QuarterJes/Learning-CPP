// Copyright 2024 <Jesang Limbu>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<std::string> *const v);
void display(int *array, int sentinel);
void test(int *p);

int main() {
  // vector<std::string> v{"Poop", "Pee", "Idk"};
  // int array[]{56, 32, 83, 45, 29, -1};


  // display(&v);

  // cout << array << endl;

  // display(array, -1);

  // cout << (array) << endl;
  //
  int p[] {1, 2, 3};
  cout << p << endl;
  *p = 5;
  test(p);
  cout << p << endl; 
}

void test(int *p) {
  p = p + sizeof(p);
}

void display(const vector<string> *v) {
  for (auto str : *v)
    cout << str << " ";
  cout << endl;
}

void display(int *array, int sentinel) {
  while (*array != sentinel) {
    cout << array++ << " ";
  }
  cout << endl;
  cout << array << endl;
  cout << endl;
}
