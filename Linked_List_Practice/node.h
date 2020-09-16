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
    void InsertBeginning(Node*,Node*);
    void DisplayList();

};


#endif // NODE_H
