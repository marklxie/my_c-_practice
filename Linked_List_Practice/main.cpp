#include <node.h>
using namespace std;

struct Fate{
    int go;
    char home;
};

int main()
{
    Node* head = NULL;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* four = NULL;

    /*Fate* chicken = NULL;
    chicken = new Fate();
    chicken -> go = 5;
    chicken -> home = 'a';*/


    head = new Node();
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();

    head -> data = 1;
    head -> Next = one;

    one -> data = 2;
    one -> Next = two;

    two -> data = 3;
    two -> Next = three;

    three -> data = 4;
    three -> Next = four;

    four -> data = 5;
    four -> Next = NULL;

    /*Node* hold = head;
    while( hold != NULL){
        cout << hold -> data << endl;
        hold = hold -> Next;
    }*/

    head -> DisplayList();
    Node** pointHead = &head;
    Node* zero = NULL;
    zero = new Node();
    zero -> data = 0;
    cout << *pointHead << endl;
    zero -> InsertBeginning(head);
    cout << zero -> Next << endl;
    cout << *pointHead << endl;
    zero -> DisplayList();
    return 0;
}
