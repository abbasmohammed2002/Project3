/***********************************
 * Node declaration
 * DO NOT CHANGE
 ***********************************/
#include <iostream>
using namespace std;
class List;

class Node
{ friend List;
  public:
    Node(string argf="",string argl="",int arga=0);  // Default constructor
    ~Node();                                         // Destructor 
    void put(ostream &out);                          // Put
    void fore(ostream &out);                         // Output list forwards
    void back(ostream &out);                         // Output list backwards
    void insert(Node *p);                            // Recursive insert
    bool operator == (const Node &);                 // Equal
    bool operator < (const Node &);                  // Less than
    bool operator > (const Node &);                  // Greater than
  private:
    string first,last;
    int age;
    Node *next;
};

typedef Node * node_ptr;
