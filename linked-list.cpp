#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
};

void show_list(node *curr){
    while (curr != NULL){
        cout << curr->val << " -> ";
        curr = curr->next;
    }

    cout << "NULL" << endl;
}

node* create_node(node *curr, int val){
    node *n;
    n = new node;

    n->val = val;
    n->next = NULL;

    curr->next = n;
    
    return n;
}

int main(){
    node *head;
    head = new node;

    head->val = 1; 
    head->next = NULL;

    node *curr = head;

    curr = create_node(curr, 2);
    curr = create_node(curr, 3);
    curr = create_node(curr, 4);
    curr = create_node(curr, 5);

    show_list(head);

    return 0;
}