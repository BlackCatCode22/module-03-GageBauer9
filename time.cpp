#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct Node
{
    int data;

    Node* next;
};

void addtoend(Node** head, int new_data)
{
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = nullptr; 

    Node *last = *head;


    if (*head == nullptr)
    {
        *head = new_node;
        return;
    }

    while (last->next != nullptr)
    {
        last = last->next;
    }
    
    last->next = new_node;
    return;
}

void deleteAtFirst(Node*&head){
   if(head==NULL){
      return;
   }
   Node*temp=head;
   head= head->next;
   delete temp;
   return;
}

void display(Node* node)
{
    while (node !=nullptr)
    {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << "\n";
}


int main()
{
    Node* head = nullptr;
    addtoend(&head, 1);
    addtoend(&head, 2);
    addtoend(&head, 3);
    deleteAtFirst(head);
    display(head);


    return 0;
}