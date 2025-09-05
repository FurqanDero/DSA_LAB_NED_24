#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void PrintList (Node* head) {
    Node* temp= head;
    while (temp!= NULL) {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<< "NULL" <<endl;
}

Node* insertatFront(Node* head, int x) {
      Node* newNode= new Node();
      newNode->data = x;
      newNode->next= head;
      return newNode;
}

Node* removefromEnd(Node* head) {
    if (head == NULL) {
        cout<< "Linked List is empty";
        return NULL;
    }

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* secondLast = head;
    while(secondLast ->next->next != NULL) {
        secondLast = secondLast->next;
    }
    delete secondLast->next;
    secondLast->next = NULL;
    return head;
}

int CountNodes (Node* head) {
    int count=0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current= current->next;
    }
    return count;
}
 void searchElement(Node* head, int target) {
    Node* curr= head;
    while (curr != NULL) {
        if (curr-> data == target) {
            cout<< "Target has been found!";
            return;
        }
        curr= curr-> next;
    }
    cout<<"Target not found";
}

Node* reverseList(Node* head) {
    Node* curr = head, *prev = NULL, *next;
    while (curr!= NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr= next;
    }
    return prev;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    cout << "Before reversal :" <<endl;
    PrintList(head);
    cout << "After Reversal : " <<endl;
    head= reverseList(head);
    PrintList(head);

    return 0;
}
