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

int main(){
	int t;
	cin>>t;
	while(t--){
int n1,n2;;
        cin>>n1;
        node* head1=NULL;
        while(n1--)
        {
        int data;
        cin>>data;
        insertAtHead(head1,data);
        }
        node* head2=NULL;
		cin>>n2;
        while(n2--)
        {
        int data;
        cin>>data;
        insertAtHead(head2,data);
        }
node *head=merge(head1,head2);
print(head);
}
return 0;
}