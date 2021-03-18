#include "LLClass.hpp"

LLClass::LLClass(){
    head = new Node;
    head->next = nullptr;
}

LLClass::~LLClass(){
//implement and check
    Node *i, *p;
    i = head->next;
    while(i != nullptr){
        p = i;
        i = i->next;
        delete p;
    }
    delete head;
}

LLClass& LLClass::operator=(const LLClass& rhs){
//FIXME: Students implement this part

}

void LLClass::push(char c){
    Node *n, *i;
    i = head;
    while (i->next != nullptr) i = i->next;  
    n = new Node;
    n->c = c;
    n->next = nullptr;
    i->next = n;
}

void LLClass::print(){
    Node *i;
    i = head->next;
    while(i != nullptr){
        printf("%c", i->c);
        i = i->next;
    }
    printf("\n");
}
