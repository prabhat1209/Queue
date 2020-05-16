#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*rear=NULL, *front=NULL;

void enqueue(int s){
    struct Node *t = new Node();
    if(t==NULL)
        cout<<"Queue is Full.";
    else{
        t->data = s;
        t->next = NULL;
        if(front==NULL)
            rear = front = t;
        else{
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue(){
    struct Node *t;
    int x = -1;
    if(front == NULL)
        cout<<"The queue is Empty.";
    else{
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

void display(){
    struct Node *t;
    t=front;
    while(t){
        cout<<t->data<<" ";
        t= t->next;
    }
    cout<<endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    cout<<"The deleted element is : "<<dequeue()<<endl;
    display();
    return 0;
}
