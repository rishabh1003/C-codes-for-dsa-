#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    // destructor
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }


};

void insertAtHead(Node* &head, int d){
 //new node create
 Node* temp=new Node(d);
 temp-> next=head;
 head=temp;
 }

 void insertAtTail(Node* &tail, int d){
     Node* temp=new Node(d);  
     tail-> next=temp;
     tail=tail->next;
 }

 void print(Node* &head){
    Node*temp= head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;


 }

 void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);

        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head){
    if (position==1){
        Node* temp=head;
         head=head->next;
         temp->next=NULL;
         delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}



int main(){
    // create a new node 
    Node* node1= new Node(10);
   // cout<<node1->data<<endl;
   // cout<< node1-> next<<endl;
    // head pointer to node1 
    Node* head=node1;
    Node* tail=node1;
    /*print (head);
    
    insertAtHead(head,12 );
    print(head);
    insertAtHead(head,15);
    print(head);*/

    print(head);

    insertAtTail(tail,14);

    print(head);

    insertAtTail(tail,17);

    print(head);

    insertAtPosition(tail,head, 2, 22);
    print(head);

     insertAtPosition(tail,head, 4, 21);
    print(head);
    

    cout<<"tail "<<tail->data<<endl;
    cout<<"head "<<head->data<<endl;
}