#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


class Queue
{
     int front=-1,rear=-1,n;
     struct Node *front2=nullptr,*rear2=nullptr;
     int *arr;
     

    public:

    /**********************************************Functions of Normal Queue***************************************************/

     void initialize_1()
     {
        
        cout<<"enter the size of the Queue:"<<endl;
        cin>>n;
        arr= new int[n];
     }

     void enqueue()
     {
        int x;
        cout<<"enter the element to be pushed:"<<endl;
        cin>>x;
        if (rear==n-1)
           cout<<"Queue is full";
        else{
            rear++;
            arr[rear]=x;
        }
     }

     int dequeue()
     {
         int x=-1;
         if (rear==front)
            cout<<"queue is empty"<<endl;
        else{
            front++;
            x=arr[front];
        }
        return x;
     }

     void display()
     {
         for (int i=front+1;i<=rear;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
     }

     /**********************************************Functions of Circular Queue*************************************************/


     void display_circular()
     {
         for (int i=front;i!=rear;i=(i+1)%n)
         {
               cout<<arr[i]<<" ";
         }
            cout<<arr[rear]<<" ";
          
     }
     
     void enqueue_circular()
     {
        int x;
        cout<<"enter the element to be pushed:"<<endl;
        cin>>x; 
         if ((rear+1)%n==front)
            cout<<"Queue is Full";
        
         else if (front==-1 && rear==-1)
         {
           front=rear=0;
           arr[front]=x;
         }
        else{
            rear=(rear+1)%n;
            arr[rear]=x;
        }
     }

     int dequeue_circular()
     {
         int x=-1;
         if (front==rear)
            cout<<"Queue is Empty"<<endl;
        else{
            front=(front+1)%n;
            x=arr[front];
        }

        return x;
     }

/**************************************************Functions of Queue Using Linked List*****************************************/

     void enqueue(int x)
    {
    struct Node *t = new struct Node;
    if (t == nullptr)
        cout<<"Queue is Full"<<endl;
    else
    {
        t->data = x;
        t->next = nullptr;
        if (front2 == nullptr)
            front2 = rear2 = t;
        else
        {
            rear2->next = t;
            rear2 = t;
        }
    }
    }

    int dequeue_ll()
    {
        int x = -1;
        struct Node *t;
       if (front2 == nullptr)
            cout<<"Queue is Empty"<<endl;
       else
       {
           t = front2;
           front2 = front2->next;
           x = t->data;
           delete t;
      }
    return x;
}
void display_ll()
{
    if (front2==nullptr && rear2==nullptr)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    struct Node *p = front2;
    while (p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}


/***********************************************functions of Deque************************************************************************/

void enqueue_front(int x)
{
  if ((rear+1)%n==front)
      cout<<"Deque is Full"<<endl;
  else if (front==-1 && rear==-1)
  {
    front++;
    rear++;
    arr[front]=x;
  }
  else{
    front=(front+n-1)%n;
    arr[front]=x;
  }
}

void enqueue_rear(int x)
{
  if ((rear+1)%n==front)
      cout<<"Deque is Full"<<endl;
  else if (front==-1 && rear==-1)
  {
    front++;
    rear++;
    arr[rear]=x;
  }
  else{
    rear=(rear+1)%n;
    arr[rear]=x;
  }
}

int Dequeue_rear()
{
  int x=-1;

  if (front==-1 && rear==-1)
       cout<<"Deque is Empty"<<endl;
  else if (front==rear)
  {
    x=arr[rear];
    front=rear=-1;
  }
  else{
    x=arr[rear];
    rear=(rear+n-1)%n;
  }
  return x;

}


int Dequeue_front()
{
  int x=-1;

  if (front==-1 && rear==-1)
       cout<<"Deque is Empty"<<endl;
  else if (front==rear)
  {
    x=arr[rear];
    front=rear=-1;
  }
  else{
    x=arr[front];
    front=(front+1)%n;
  }
  return x;
}

int get_front()
{
  if (front==-1 && rear==-1)
  { 
    cout<<"Deque is Empty"<<endl;
    return -1;

  }
     
  else{
    return arr[front];
  }
}

int get_rear()
{
  
  if (front==-1 && rear==-1)
  { 
    cout<<"Deque is Empty"<<endl;
    return -1;

  }
  else{
    return arr[rear];
  }
}
};

int main()
{

    Queue q;
    int choice1;
    cout<<"1.Normal Queue using array"<<endl<<"2.Circular Queue"<<endl<<"3.Queue using Linked List"<<endl<<"4.Deque"<<endl;
    cin>>choice1;
    if (choice1==1)
    {
        q.initialize_1();
        int subchoice;
        cout<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"4.exit"<<endl;
        cin>>subchoice;
        do{

          if (subchoice==1)
            q.enqueue();
          else if (subchoice==2)
            q.dequeue();
          else if (subchoice==3)
            q.display();
          else if (subchoice==4)
          break;

        cout<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"4.exit"<<endl;
        cin>>subchoice;

        }while (subchoice<=4);
    }
    else if (choice1==2)
    {
         q.initialize_1();
         

        int subchoice;
        cout<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"4.exit"<<endl;
        cin>>subchoice;
        do{

          if (subchoice==1)
            q.enqueue_circular();
          else if (subchoice==2)
            q.dequeue_circular();
          else if (subchoice==3)
            q.display_circular();
          else if (subchoice==4)
          break;

        cout<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"4.exit"<<endl;
        cin>>subchoice;

        }while (subchoice<=4);

    }
    else if (choice1==3){
        int subchoice;
        cout<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"4.exit"<<endl;
        cin>>subchoice;
        do{

          if (subchoice==1)
          {
             int x;
             cout<<"enter the element to be pushed:";
             cin>>x;
             q.enqueue(x);
          }
            
          else if (subchoice==2)
            q.dequeue_ll();
          else if (subchoice==3)
            q.display_ll();
          else if (subchoice==4)
          break;

        cout<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"4.exit"<<endl;
        cin>>subchoice;

        }while (subchoice<=4);
    }
    else{
      q.initialize_1();
      int subchoice;
        cout<<endl<<"1.Add at Front"<<endl<<"2.Add at Rear"<<endl<<"3.Delete from Front"<<endl<<"4.Delete From Rear"<<endl<<"5.Get Front"<<endl<<"6.Get Rear"<<endl<<"7.Display"<<endl<<"8.Exit";
        cin>>subchoice;
        do{

          if (subchoice==1)
          {
             int x;
             cout<<"enter the element to be pushed:"<<endl;
             cin>>x;
             q.enqueue_front(x);
          }
            
          else if (subchoice==2)
          {
            int x;
             cout<<"enter the element to be pushed:"<<endl;
             cin>>x;
             q.enqueue_rear(x);
          }
            
          else if (subchoice==3)
            q.Dequeue_front();
          else if (subchoice==4)
            q.Dequeue_rear();
          
          else if (subchoice==5)
            cout<<"Front element:"<<q.get_front()<<endl;
          else if (subchoice==6)
            cout<<"Rear element:"<<q.get_rear()<<endl;
          else if (subchoice==7)
              q.display_circular();
          else if (subchoice==8)
              break;


        cout<<endl<<"1.Add at Front"<<endl<<"2.Add at Rear"<<endl<<"3.Delete from Front"<<endl<<"4.Delete From Rear"<<endl<<"5.Get Front"<<endl<<"6.Get Rear"<<endl<<"7.Display"<<endl<<"8.Exit";
        cin>>subchoice;

        }while (subchoice<=8);

}

}

