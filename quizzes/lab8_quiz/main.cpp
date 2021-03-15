#include "hex.hpp"

/**
 * Dealing with hex input.
 * The point of this quiz is to learn how to deal with
 * encoding and decoding of hexadecimal representations
 */
int main(void) {

  string input;
  vector<int> hex_str;
  string normal_str;
  HexCodec *codec = new HexCodec;

  printf("Give me a string: -> ");
  cin >> input;

  // now we convert to hex
  hex_str = codec->convert_to_hex(input);
  printf("Encoded Input: ");
  for (int i = 0; i < hex_str.size(); ++i) {
    printf("%x", hex_str[i]);
  }
  printf("\n");

  normal_str = codec->convert_to_str(hex_str);
  printf("Decoded Input: %s\n", normal_str.c_str());

  exit(EXIT_SUCCESS);
}
