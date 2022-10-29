#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
       this->data=d;
       this->next=NULL;
    }
};

void insertAthead(Node* &head, int d){
       Node* temp=new Node(d);
       temp->next=head;

       head=temp;
}
void print(Node* &head){
    Node*temp= head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main(){
   /* Node n1(2);
    Node n2(4);
    Node n4(2313);

    n1.next= &n2;
    n2.next= &n4;
     n1.next=&n4;
    n2.next=NULL;

    Node* head=&n1;
    while(head!=NULL)
    {
      cout<<head->data<<" ";
      head =head->next;

    }

    n1.next=&n4;
    n2.next=NULL;*/


 Node* node1=new Node(10);
 Node* head=node1;

 insertAthead(head,12);

  print (head);


}