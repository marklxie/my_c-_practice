#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node
{
public:
    Node();
    int data;
    Node* Next;
    void InsertBeginning(Node*);
    void DisplayList();
    void InsertLast(Node*, Node*);

};


#endif // NODE_H
