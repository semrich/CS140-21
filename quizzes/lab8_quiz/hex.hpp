#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class HexCodec {
public:
  vector<int> convert_to_hex(string &);
  string convert_to_str(vector<int> &);
};
