#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
      this->data=d;
      this->next=NULL;
      this->prev=NULL;
    }


};

void print(Node* head){
    Node* temp=head;
     while(temp!=NULL){
        cout<<temp-> data<<" " ;
        temp=temp->next;
     }
     cout<<endl;
}

int getlength(Node* head){
    Node* temp=head;

    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}


  void insertAtHead(Node* &tail,Node* &head, int d){
    if (head==NULL){
      Node* temp= new Node(d);
      head=temp;
      tail=temp; 
    }
    else{ Node* temp=new Node(d);
    head->prev=temp;
    temp->next=head;
    head=temp;
    }
   

}

void insertAtTail(Node* &head,Node* &tail, int d){
     if(tail==NULL){
        Node* temp= new Node(d);
         tail=temp; 
         head=temp;
     }
   
   else{Node* temp=new Node(d);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    } 
}

 void insertAtPosition(Node* &tail,Node* &head,int position,int d ){
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp -> next == NULL) {
        insertAtTail(head,tail,d);

        return ;
    }

    Node* nodetemp= new Node(d);

   nodetemp->next=temp->next;
   temp->next->prev=nodetemp;
   nodetemp->prev=temp;
   temp->next= nodetemp; 

    
  



}

int main(){
   
   Node* head=NULL;
   Node* tail=NULL;
   print (head);
  cout<< getlength(head)<<endl;


  insertAtHead(tail,head,9);
    print (head);
  cout<< getlength(head)<<endl;

 
  insertAtTail(head,tail,12);
    print(head);
  cout<< getlength(head)<<endl;

  insertAtPosition(tail,head,3,11);
  print(head);
  cout<< getlength(head)<<endl;

  
}