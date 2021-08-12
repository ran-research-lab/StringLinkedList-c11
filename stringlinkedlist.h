#ifndef STRINGLINKEDLIST_H
#define STRINGLINKEDLIST_H
#include <string>
using namespace std;

class StringNode {
private:
    string elem;
    StringNode* next;

friend class StringLinkedList;
};

class StringLinkedList {
public:
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const string& front() const;
    void addFront(const string& e);
    void removeFront();
    void display(ostream &out) const;
private:
    StringNode* head;


};

ostream& operator<<(ostream &out, const StringLinkedList &L);


#endif // STRINGLINKEDLIST_H
