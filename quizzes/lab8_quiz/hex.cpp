#include "hex.hpp"

vector<int> HexCodec::convert_to_hex(string &input) {
  vector<int> out;
  istringstream ss;
  int t;

  out.resize(input.size());
  for (int i = 0; i < input.size(); ++i) {
    ss.clear();
    ss.str(input);
    ss >> hex >> t;
    printf("t: %d\n", t);
  }
  return out;
}

string HexCodec::convert_to_str(vector<int> &input) {
  stringstream ss;
  string out;
  char c;

  for (int i = 0; i < input.size(); ++i) {
    ss.clear();
    ss.put(input[i]);
    ss >> c;
    out.push_back(c);
  }
  return out;
}
