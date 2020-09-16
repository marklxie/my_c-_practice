#include "node.h"

Node::Node()
{

};

void Node::InsertBeginning(Node* newNode, Node* head){
    Node** pointHead(&head);
    newNode -> Next = *pointHead;

}

void Node::DisplayList(){
    int intHold = data;
    Node* hold = Next;
        cout << intHold << endl;
    while(hold -> Next != NULL){
        cout << hold -> data << endl;
        hold = hold -> Next;
    }
}
