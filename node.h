#include <iostream>
#include "record.h"

using namespace std;

class Node {
public:
  Record* data;
  Node* next;
  void list_push(Node**, Record*);
  void remove_node();
  void search_by_name(Node*, string);
  void search_by_phone_number(Node*, string);
  void search_by_address(Node*, string);
  void print_nodes(Node*);
};

void Node::list_push(Node** head_ref, Record* new_rec) {
  Node* new_node = new Node();
  new_node->data = new_rec;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void Node::remove_node() {
  
}

void Node::search_by_name(Node* n, string name) {
  cout << "Search results:\n";
  while (n != NULL) {
    if(n->data->name == name) {
      cout << "Namea: " + n->data->name + "\n";
      cout << "Phone number: " + n->data->phone_num + "\n";
      cout << "Address: " + n->data->address + "\n\n";
    }
    n = n->next;
  }
}

void Node::search_by_phone_number(Node* n, string phone_num) {
  cout << "Search results:\n";
  while (n != NULL) {
    if(n->data->name == phone_num) {
      cout << "Name: " + n->data->name + "\n";
      cout << "Phone number: " + n->data->phone_num + "\n";
      cout << "Address: " + n->data->address + "\n\n";
    }
    n = n->next;
  }
}

void Node::search_by_address(Node* n, string address) {
  cout << "Search results:\n";
  while (n != nullptr) {
    if(n->data->name == address) {
      cout << "Name: " + n->data->name + "\n";
      cout << "Phone number: " + n->data->phone_num + "\n";
      cout << "Address: " + n->data->address + "\n\n";
    }
    n = n->next;
  }
}

void Node::print_nodes(Node* n){
  while (n != nullptr) {
    cout << "Name: " + n->data->name + "\n";
    cout << "Phone number: " + n->data->phone_num + "\n";
    cout << "Address: " + n->data->address + "\n\n";
    n = n->next;
  }
}