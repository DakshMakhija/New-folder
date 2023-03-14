#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node(int d)
		{
			data=d;
			next=NULL;
		}
};
void insert(node* &head,int data)
{
	if(head==NULL)
	{
		head=new node(data);
		return;
	}
	node* tail=head;
	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
	tail->next=new node(data);
	return;
		
}
void list(node* &head,int n)
{
	int data;
	
	while(n--)
	{
		cin>>data;
		insert(head,data);
	}
}

node* midPoint(node* head){
if(head==NULL||head->next==NULL){
return head;
}
node*slow=head;
node*fast=head->next;
while(fast!=NULL && fast->next!=NULL){
fast=fast->next->next;
slow=slow->next;
}
return slow;
}

int main()
{
	node* head=NULL;
	int n;
	cin>>n;
	list(head,n);
	node* k = midPoint(head);
	cout<<k->data<<" ";

}