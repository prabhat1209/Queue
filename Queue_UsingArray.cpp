#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int rear, front, size;
        int *Q;
    public:
        Queue(){ rear=front=-1; size=10; Q = new int[size]; }
        Queue(int size){rear=front=-1; this->size=size; Q = new int[this->size];}
        void enqueue(int x);
        int dequeue();
        void display();
};

void Queue :: enqueue(int x){
    if(rear==size-1)
        cout<<"The Queue is Full.\n";
    else
        Q[++rear] = x;
}

int Queue :: dequeue(){
    int x = -1;
    if(front==rear)
        cout<<"The Queue is Empty.\n";
    else{
        x = Q[front+1];
        front++;
    }
    return x;
}

void Queue :: display(){
    if(rear==front)
        cout<<"The Queue is Empty.";
    else
        for(int i=front+1;i<=rear;i++)
            cout<<Q[i]<<" ";
    cout<<endl;
}

int main(){
    
    Queue q(10);
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    cout<<"The deleted element is : "<<q.dequeue()<<endl;
    q.display();
    return 0;
}