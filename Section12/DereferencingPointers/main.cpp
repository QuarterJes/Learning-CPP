#include <iostream>
#include <vector>

using namespace std;

int main() {
//  int score {100};
//  int *score_ptr {&score};  
//
//  cout << *score_ptr << endl;
//
//  *score_ptr = 200;
//  cout << *score_ptr << endl;
//  cout << score << endl;
//
  
//  double high_temp {100.7};
//  double low_temp {13.6};
//
//  double *temp_ptr {&high_temp};
//  
//  cout << *temp_ptr << endl;
//  *temp_ptr = 87.2;
//  cout << high_temp << endl;
//
//  temp_ptr = &low_temp;
//  
//  cout << *temp_ptr << endl;
//  *temp_ptr = 8.2;
//  cout << low_temp << endl;
//
  
//  string name {"Frank"};
//  string *str_ptr {&name};
//
//  cout << *str_ptr << endl;
//  name = "James";
//  cout << *str_ptr << endl;

  vector<string> names {"Larry", "Moe", "Curly"};
  vector<string> *vector_ptr {nullptr};

  vector_ptr = &names;

  cout << (*vector_ptr).at(0) << endl;
  names.at(0) = "Jesang";
  
  cout << "Names: ";
  for (auto name: *vector_ptr)
    cout << name << " ";
  cout << endl;  

  return 0;
}
