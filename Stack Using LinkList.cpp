#include<iostream>

int MAX=4;

int i=0;

using namespace std;


//   Creating a NODE Structure
struct node
{
    int data;
    node *next;
};

// Creating a class STACK
class stack
{
    node *top;
    public:
    stack() // constructure
    {
        top=NULL;
    }
    void push(); // to insert an element
    void pop();  // to delete an element
    void show(); // to show the stack
};
// PUSH Operation
void stack::push()
{
    int value;
    node *temp;
    temp=new node;
    temp->next=NULL;

    if(i>=MAX)
    {
        cout<<"STACK IS FULL!!!!!"<<endl;

    }

    else if (top==NULL)
       {
           cout<<"Enter DATA:";
           cin>>value;
           temp->data=value;
           top=temp;
           temp->next = NULL;

       }

       else
       {
           cout<<"Enter DATA:";
           cin>>value;
           temp->data=value;
           top->next=temp;
           temp->next=NULL;
         ++i;
       }
    top=temp;


}

// POP Operation
void stack::pop()
{
    node *ptr;
    if(top==NULL)
    {
        cout<<"The stack is empty!!!"<<endl;
    }
    else
    {
    ptr=top;
    top=top->next;
    cout<<"POP Operation........nPoped value is "<<ptr->data<<endl;

    delete ptr;
    --i;
    }



}

// Show stack
void stack::show()
{
    node *ptr1;

    ptr1=top;

    cout<<"The stack is:";
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" "<<endl;
        ptr1=ptr1->next;
    }

}

// Main function
int main()
{
    stack s;
    int choice;
    while(1)
    {

        cout<<"1:PUSH"<<endl;
        cout<<"2:POP"<<endl;
        cout<<"3:DISPLAY STACK"<<endl;
        cout<<"4:EXIT"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"Please enter correct choice(1-4)!!";
                break;
        }
    }
    return 0;
}

