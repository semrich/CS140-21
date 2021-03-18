#include "hex.hpp"

/**
 * Dealing with hex input.
 * The point of this quiz is to learn how to deal with
 * encoding and decoding of hexadecimal representations
 */
int main(void) {

  string input;
  string hex_str;
  string normal_str;
  HexCodec *codec = new HexCodec;

  printf("Give me a string(no spaces): -> ");
  cin >> input;

  printf("You entered: %s\n", input.c_str());
  // now we convert to hex
  hex_str = codec->convert_to_hex(input);
  printf("Encoded Input: %s\n", hex_str.c_str());

  normal_str = codec->convert_to_str(hex_str);
  printf("Decoded Input: %s\n", normal_str.c_str());

  exit(EXIT_SUCCESS);
}
