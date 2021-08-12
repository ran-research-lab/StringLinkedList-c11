#include "stringlinkedlist.h"
#include <iostream>
using namespace std;

StringLinkedList::StringLinkedList() : head(NULL) { }

StringLinkedList:: ~StringLinkedList() { while (!empty()) removeFront(); }

bool StringLinkedList::empty() const {
    return head == NULL;
}

const string& StringLinkedList::front() const {
    return head->elem;
}

void StringLinkedList::addFront(const string& e) {
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}

void StringLinkedList::removeFront() {
    StringNode* old = head;
    head = old->next;
    delete old;
}

void StringLinkedList::display(ostream &out) const{
    StringNode *curr = head;
    while (curr != NULL) {
        out << curr->elem << " ";
        curr = curr->next;
    }
}

ostream& operator<<(ostream &out, const StringLinkedList &L) {
    L.display(out);
    return out;
}
