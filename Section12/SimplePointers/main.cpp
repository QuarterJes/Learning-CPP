#include <iostream>
#include <vector>

using namespace std;

int main() {
// int num {10};
// cout << "The value of num is " << num << endl;
// cout << "Sizeof num is " << sizeof num << endl;
// cout << "Address of num is " << &num << endl;
//
// int *p;
// cout << "\nThe value of p is " << p << endl;
// cout << "Address of p is " << &p << endl;
// cout << "Sizeof p is " << sizeof p << endl;
//
// p = nullptr;
// cout << "\nThe value of p is " << p << endl;
 
// int *p1 {nullptr};
// double *p2 {nullptr};
// unsigned long long *p3 {nullptr};
// vector<string> *p4 {nullptr};	
// string *p5 {nullptr};
//
// cout << "\nSizeof p1 is: " << sizeof p1 << endl;
// cout << "Sizeof p2 is: " << sizeof p2 << endl;
// cout << "Sizeof p3 is: " << sizeof p3 << endl;
// cout << "Sizeof p4 is: " << sizeof p4 << endl;
// cout << "Sizeof p5 is: " << sizeof p5 << endl;
 
// all pointers regardless of what data type they point to have the same size
// as of right now in my machine the size is 8 but it can be 4
 
// int score {10};
// double high_temp {100.7};
// 
// int *score_ptr {nullptr};
// score_ptr = &high_temp;
//
// score_ptr = &score;
// cout << "Value of score is: " << score << endl;
// cout << "Address of score is: " << &score << endl;
// cout << "Value of score_ptr is: " << score_ptr << endl;

// testing stuff out...
  int a = 36;
  int *b {nullptr};
    
  vector<int> v {};
  vector<int> *w {nullptr};
  
  cout << "The address of a is: " << &a << endl;
  cout << "The address of v is: " << &v << endl;

  b = &a;
  w = &v;

  cout << "The address of a is: " << b << endl; 
  cout << "The address of v is: " << w << endl; 
}
