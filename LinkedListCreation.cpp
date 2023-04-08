#include <iostream>

class Node{
  public:
  int data;
  Node* next;

  Node(){
    this->data = 0;
    this->next = NULL;
  }
  
  Node(int data){
    this->data = data;
    this->next = NULL;
  }



};


void print(Node* head){
  Node* temp = head;
  
  while(temp != NULL){
    std::cout<<temp->data<<" --> ";
     temp = temp->next ;  
  }
}

int main() {

    Node* first = new Node(2);
    Node* second = new Node(5);
    Node* third = new Node(7);
    Node* fourth = new Node(24);
    Node* fifth = new Node(65);
    Node* sixth = new Node(45);

//Manually connecting the nodes

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;

  print(first);
  
}
