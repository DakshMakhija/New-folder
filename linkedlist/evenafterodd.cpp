#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
};
void insertathead(node* &head,int data)
{
	node *n=new node(data);
	n->next=head;
	head=n;
}
void attail(node* &head,int data)
{
	if(head==NULL)
	{
		head=new node(data);
		return;
	}
	node *tail=head;
	while(tail->next!=NULL)
	{
		tail=tail->next;

	}
	tail->next=new node(data);
	return;

}
void buildlist(node *&head)
{
	int data;
	cin>>data;
	while(data!=-1)
	{
		attail(head,data);
		cin>>data;
	}
}

void evenodd(node *&head)
{
	node *evenstart=NULL;
	node *evenend=NULL;
	node *oddend=NULL;
	node *oddstart=NULL;
	node *curr=head;
	while(curr!=NULL)
	{
		int val=curr->data;
		if(val %2==0)
		{
			if(evenstart==NULL)
			{
				evenstart=curr;
				evenend=evenstart;
			}
			else
			{
				evenend->next=curr;
				evenend=evenend->next;
			}
		}
		else{
			if(oddstart==NULL)
			{
				oddstart=curr;
				oddend=oddstart;
			}
			else
			{
				oddend->next=curr;
				oddend=oddend->next;
			}	
		}
        curr=curr->next;
	}
	if(oddstart==NULL||evenstart==NULL)
	{   
        
		return;
	}

	
	oddend->next=evenstart;
    evenend->next=NULL;
	head=oddstart;
}


void print(node*head){
    //node*temp = head;
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main() {
	int n,val;
	
	
	
		cin>>n;
		node *head1=NULL;
		for(int i=1;i<=n;i++)
	{
		cin>>val;
		if(i==1)
		{
			node *n2=new node(val);
			head1=n2;
		}
		else
		{
			attail(head1,val);
		}
	}
		evenodd(head1);
	    print(head1);
	return 0;
}