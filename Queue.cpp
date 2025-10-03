#include<iostream>
using namespace std;
#define SIZE 5

class Queue{
    int arr[SIZE];
    int front, rear;
    
    public:
    Queue(){
        front =-1;
        rear=-1;
    }
    
    void enqueue(int value){
        if(rear==SIZE-1){
            cout<<"Queue Overflow!"<<endl;
        }
        if (front==-1) front=0;
        arr[++rear]=value;
        cout<<value<<" inserted in queue."<<endl;
    }
    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queu Overflow !"<<endl;
            return ;
        }
        cout<<arr[front]<<" removed from queue."<<endl;
        front++;
    }
    void display(){
        if(front==-1 || front>rear){
            cout<<"Queue is empty."<<endl;
            return;
        }
        cout<<"Queue elements: ";
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    
    q.dequeue();
    q.display();
    
    q.enqueue(40);
    q.display();
    
    return 0;
}

/* output 
10 inserted in queue.
20 inserted in queue.
30 inserted in queue.
Queue elements: 10 20 30 
10 removed from queue.
Queue elements: 20 30 
40 inserted in queue.
Queue elements: 20 30 40 
*/
