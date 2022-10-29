/*https://www.codingninjas.com/codestudio/
problems/queue-using-array-or-singly-linked-list
_2099908?leftPanelTab=0*/

// I just implemented the queue in above editor

#include<iostream>
using namespace std;

class queue{
     

     public:
     int *arr;
     int front;
     int rear;
     int size;
      queue(){
        size=10001;
        arr=new int [size];
        front=0;
        rear=0;
      }

      void enqueue(int data){
    if (rear==size){
        cout<<"queue is full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
}

     int dequeue(){
    if (front==rear){
        return -1;
    }

    else{
        int ans=arr[front];
        arr[front]=-1;
        front++;

        if (front==rear){
            front=0;
            rear=0;
        }
        return ans;
    }
}

        int front(){
    if (front==rear){
        return -1;
    }
    else{
       return  arr[front];
    }
}

     bool isEmpty(){
    if (front==rear){
        return true;
    }
    else{
        
        return false;
        }
}
};




int main(){
    queue q1;

    q1.enqueue(2);
    q1.enqueue(5);
    q1.enqueue(6);


    q1.front()


}

