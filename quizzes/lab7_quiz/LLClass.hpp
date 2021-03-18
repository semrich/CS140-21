#ifndef LLCLASS_H
#define LLCLASS_H
#include <cstdio>
#include <cstdlib>
#include <string>

typedef struct node_s {
    char c;
    struct node_s *next;
} Node;

class LLClass{
    public:
    LLClass();
    ~LLClass();
    LLClass& operator=(const LLClass&);
    void push(char);
    void print();
    
    private:
    Node *head;
};
#endif
