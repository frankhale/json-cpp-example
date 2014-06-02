#include <iostream>
#include "json.hh"

using namespace std;
using namespace JSON;

// clang++ test.cc libjson.a -std=c++11 -Wc++11-extensions -o test

int main(int argc, char** argv)
{
  Value v = parse_string("{ 'FullName' : 'Frank Hale', 'BirthYear' : 1975 }");
  cout << v["FullName"] << endl;
  cout << v["BirthYear"] << endl;

  return 0;
}
