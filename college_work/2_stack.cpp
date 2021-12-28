#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

class Stack
{
    int *arr;
    int n;
    int top=-1;
    struct Node *Top=nullptr;
    public:

    void initialize()
    {
        
        cout<<"enter the size of the stack:";
        cin>>n;
        arr= new int[n];
    }

    void push()
    {
        int x;
        cout<<"enter the element to be pushed:";
        cin>>x;
        if (top==n-1)
           cout<<"stack Overflow";
        else{
           top++;
           arr[top]=x;
        }
    }
    void push_ll()
    {
        int x;
        cout<<"enter the element to be pushed:";
        cin>>x;
    struct Node *t = new struct Node;
    if (t == nullptr)
        printf("not enough memory");
    else
    {
        t->data = x;
        t->next = Top;
        Top = t;
    }
    }

    int pop_ll()
    {
    int x = -1;
    struct Node *t;
    if (Top == nullptr)
        printf("stack is empty");
    else
    {
        t = Top;
        Top = Top->next;
        x = t->data;
        delete t;
    }

    return x;
    }

    int pop()
    {
       int x=-1;
       if (top==-1)
           cout<<"stack is empty";
        else{
            x=arr[top];
            top--;
        }
       return x;
    }

    int isempty()
    {
       if (top == -1)
        return 1;
       else
        return 0;
    }

    int isempty_ll()
   {
    if (Top == nullptr)
        return 1;
    else
        return 0;
   }
    int top_element()
    { 
      if (top == -1)
        return -1;
      else
        return arr[top];
    }

    int top_ll()
    {
    if (Top)
        return Top->data;
    else
        return -1;
}




};
int main()
{

    Stack s;
    int choice1;
    cout<<"1.Stack using array"<<endl<<"2.Stack uisng linked list"<<endl;
    cin>>choice1;
    if (choice1==1)
    {
      s.initialize();
        int subchoice;
        cout<<endl<<"1.push"<<endl<<"2.pop"<<endl<<"3.top"<<endl<<"4.empty"<<endl<<"5.exit"<<endl;
        cin>>subchoice;

      do
      {
          if (subchoice==1)
            s.push();
          else if (subchoice==2)
            s.pop();
          else if (subchoice==3)
            cout<<"top:"<<s.top_element()<<endl;
          else if (subchoice==4)
          {
              if (s.isempty())
              cout<<"stack is empty"<<endl;
              else
              cout<<"stack is not empty"<<endl;

          }
          else if (subchoice==5)
          break;

          cout<<endl<<"1.push"<<endl<<"2.pop"<<endl<<"3.top"<<endl<<"4.empty"<<endl<<"5.exit"<<endl;
          cin>>subchoice;

        
      }while (subchoice<=5);
    }
    else if (choice1==2)
    {
         int subchoice;
        cout<<endl<<"1.push"<<endl<<"2.pop"<<endl<<"3.top"<<endl<<"4.empty"<<endl<<"5.exit"<<endl;
        cin>>subchoice;

      do
      {
          if (subchoice==1)
            s.push_ll();
          else if (subchoice==2)
            s.pop_ll();
          else if (subchoice==3)
            cout<<"top:"<<s.top_ll()<<endl;
          else if (subchoice==4)
          {
              if (s.isempty_ll())
              cout<<"stack is empty"<<endl;
              else
              cout<<"stack is not empty"<<endl;

          }
          else if (subchoice==5)
          break;

          cout<<endl<<"1.push"<<endl<<"2.pop"<<endl<<"3.top"<<endl<<"4.empty"<<endl<<"5.exit"<<endl;
          cin>>subchoice;

        
      }while (subchoice<=5);
    }
    
}