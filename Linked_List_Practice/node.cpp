#include "node.h"

Node::Node()
{

};

void Node::InsertBeginning(Node* head){
    Node** pointHead(&head);
    Next = *pointHead;
}

void Node::DisplayList(){
    cout << data << endl;
    Node* hold = Next;

    while(hold -> Next != NULL){
        cout << hold -> data << endl;
        hold = hold -> Next;
    }
        cout << hold -> data << endl;
}

void Node::InsertLast(Node * newNode, Node *head){

}
