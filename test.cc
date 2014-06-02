#include <iostream>
#include "json++/json.hh"

using namespace std;
using namespace JSON;

// clang++ test.cc json++/*.cc -std=c++11 -Wc++11-extensions -Wno-deprecated-register -o test

int main(int argc, char** argv)
{
  Value v = parse_string("{ 'FullName' : 'Frank Hale', 'BirthYear' : 1975 }");
  cout << v["FullName"] << endl;
  cout << v["BirthYear"] << endl;

  return 0;
}
