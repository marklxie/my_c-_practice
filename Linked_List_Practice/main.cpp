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

    Fate* chicken = NULL;
    chicken = new Fate();
    chicken -> go = 5;
    chicken -> home = 'a';


    head = new Node();
    one = new Node();
    two = new Node();

    head -> data = 1;
    head -> Next = one;

    one -> data = 2;
    one -> Next = two;

    two -> data = 3;
    two -> Next = NULL;

    Node* hold = head;
    while( hold != NULL){
        cout << hold -> data << endl;
        hold = hold -> Next;
    }
    cout << chicken -> go << "    " << chicken -> home << endl;

    head -> DisplayList();
    return 0;
}
