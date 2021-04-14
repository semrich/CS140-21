#include "LLClass.hpp"

LLClass::LLClass() {
    // This should give you a clue about the op= and Copy Cons functions.
    head = new Node;
    head->next = head;
    head->prev = head;
}

LLClass::~LLClass() {
    Node *i, *p;
    i = head->next;
    while (i != head) {
        p = i;
        i = i->next;
        delete p;
    }
    delete head;
}

LLClass &LLClass::operator=(const LLClass &rhs) {
    // FIXME: Students to implement
    if (this == &rhs)
        return *this;
    // You will need this
    head = new Node;

    return *this;
}

LLClass::LLClass(const LLClass &obj) {
    // FIXME: Students to implement.
    // This should be a deep copy, but NOT a 'move'
    // If you don't know what a 'move' is, you are not in danger of falling afoul
    // of it

    // HINT: my solution uses a loop and a member function 
}


char LLClass::pop_back() {
    char c;
    Node *n;

    n = head->prev;
    c = n->c;
    // FIXME: students to finish

    return c;
}

char LLClass::pop_front() {
    char c;
    Node *n;

    n = head->next;
    c = n->c;
    // FIXME: students to finish

    return c;
}

void LLClass::push_back(char c) {
    Node *n;
    n = new Node;
    n->c = c;

    head->prev->next = n;
    n->prev = head->prev;
    head->prev = n;
    n->next = head;
}
void LLClass::push_front(char c) {
    Node *n;
    n = new Node;
    n->c = c;

    n->next = head->next;
    n->next->prev = n;
    head->next = n;
    n->prev = head;
}

void LLClass::print(int dir) {
    Node *i;
    switch (dir) {
        case (1):
            i = head->next;
            while (i != head) {
                printf("%c", i->c);
                i = i->next;
            }
            break;
        case (2):
            i = head->prev;
            while (i != head) {
                printf("%c", i->c);
                i = i->prev;
            }
            break;
        default:
            fprintf(stderr, "Invalid direction %d: 1 = forward || 2 = reverse\n", dir);
    }
}
