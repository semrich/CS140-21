#ifndef LLCLASS_H
#define LLCLASS_H
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

typedef struct node_s {
  char c;
  struct node_s *next;
  struct node_s *prev;
} Node;

class LLClass {
public:
  LLClass();
  ~LLClass();
  LLClass &operator=(const LLClass &);
  LLClass(const LLClass &);
  void push_front(char);
  void push_back(char);
  char pop_back();
  char pop_front();
  void print(int);

private:
  Node *head;
};
#endif
