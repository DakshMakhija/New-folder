#include<iostream>
using namespace std;

class node{
public:
int data;
node*next;

node(int d){
	data=d;
	next=NULL;
}
};

void insertAtHead(node* &head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }
    node*n=new node(d);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* merge(node* a,node* b){
if(a==NULL){
return b;
}
else if(b==NULL){
return a;
}
node*c;

if(a->data < b->data){
c=a;
c->next=merge(a->next,b);
}
else{
c=b;
c->next=merge(a,b->next);
}
return c;
}
void headtail(node* head,node** front,node** back){
node*slow=head;
node*fast=head->next;
while(fast!=NULL && fast->next!=NULL){
fast=fast->next->next;
slow=slow->next;
}
*front = head;
*back = slow->next;
slow->next = NULL;
}
void MergeSort(node** headref)
{   node* head=*headref;
    node* a;
    node* b;
 
    
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
 
    headtail(head, &a, &b);
    MergeSort(&a);
    MergeSort(&b);
    *headref = merge(a, b);
}

int main(){
int n1;
        cin>>n1;
        node* head1=NULL;
        while(n1--)
        {
        int data;
        cin>>data;
        insertAtHead(head1,data);
        }
MergeSort(&head1);
print(head1);
return 0;
}
