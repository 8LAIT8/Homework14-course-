#include <iostream>
using namespace std;

class Node {
public:
    
    int num;   
    Node* next; 

    
    Node(int value) : num(value), next(nullptr) {}

    
    ~Node() {}
};

int main() {
    
    Node* node1 = new Node(10);  
    cout << "Node 1 num: " << node1->num << endl;

    
    Node* node2 = new Node(20);
    node1->next = node2;  

    cout << "Node 1 num: " << node1->num << ", Node 2 num: " << node1->next->num << endl;

    
    delete node1;
    delete node2;

    return 0;
}
