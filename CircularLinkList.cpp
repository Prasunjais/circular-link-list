#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
public:
int data;
node *next;
};

class list
{
    node *last;
    public:
list()
{
last=NULL;
}
void insert(int a)
{
node *temp;
node *q;
temp=new node();
temp->data=a;

if(last==NULL)
{
last=temp;
temp->next=temp;
cout<<"\n INSERTED IN THE LAST\n";
}
else
{
q=last->next;
last->next=temp;
temp->next=q;
cout<<"\n INSERTED";
}
}
void del()
{
    int val;
    cout<<"PLEASE ENTER THE VALUE OF THE NODE TO BE DELETED : ";
    cin>>val;
    node *q;
    node *w;
    w=last;
    q=last;
    if(q->data==val)
    {
    q=q->next;
    while(q->next!=last)
    {
        q=q->next;
    }
    q->next=w->next;
    last=q;
    delete(w);
    cout<<"\n LAST NODE CHANGED \n";
}
else
{
    w=last;
    q=q->next;
    while((q->data!=val)&&(q!=last))
    {
        w=q;
        q=q->next;
    }
       w->next=q->next;
       delete(q);

    cout<<"\n NODE DELETED \n";
}

}
void display()
{
    node *q;
    q=last;
if(q==NULL)
{
    cout<<"LINK LIST EMPTY "<<endl;
}
else{


    do{
        cout<<q->data<<" ; ";
        q=q->next;
    }while(q!=last);


}
}
};
int main()
{
    int ch,v;
    list obj;
    cout<<"--CIRCULAR LIST--\n";
    while(1)
    {
    cout<<"\nPRESS 1 TO INSERT\nPRESS 2 TO DELETE\nPRESS 3 TO DISPLAY\nPRESS 4 TO EXIT\n";
    cin>>ch;
    if(ch==4)
    {
        break;
    }
    else
    {
        switch(ch){
                    case 1:cout<<"Enter the Value of the node to be inserted : ";
                        cin>>v;
                        obj.insert(v);
                        break;
                        case 2:obj.del();
                        break;
                        case 3:obj.display();
                        break;
                        default:cout<<"INVALID INPUT\n";
                        break;
           }


       }
    }
}
