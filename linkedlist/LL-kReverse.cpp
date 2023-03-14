//Given a head to Linked List L, write a function to reverse the list taking k elements at a time. Assume k is a factor of the size of List.

//You need not have to create a new list. Just reverse the old one using head.

//Input Format
//The first line contains 2 space separated integers N and K

//The next line contains N space separated integral elements of the list.

//Constraints
//0 <= N <= 10^6 0 <= K <= 10^6

//Output Format
//Display the linkedlist after reversing every k elements

//Sample Input
//9 3
//9 4 1 7 8 3 2 6 5
//Sample Output
//1 4 9 3 8 7 5 6 2
//Explanation
//N = 9 & K = 3

//Original LL is : 9 -> 4 -> 1 -> 7 -> 8 -> 3 -> 2 -> 6 -> 5

//After k Reverse : 1 -> 4 -> 9 -> 3 -> 8 -> 7 -> 5 -> 6 -> 2







#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int d)
    { 
        data=d;
        next=NULL;
        
    }
};
void insertAthead(node* &head,int d)
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
void take_input(node*&root,int d)
{
    
    while(d--)
    {    
        int k;
        cin>>k;
        insertAthead(root,k);
     

    }
  
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

node* llkreverse(node*&head,int k)
{


    if(head==NULL or head->next==NULL){
        return head;
    }
    node*temp=head;
    int jump=1;
    node*prev = NULL;
    node*n=NULL;
    while(jump<=k){
        n=temp->next;
        temp->next=prev;
        prev=temp;
        temp=n;
        jump++;
    }
    head->next=llkreverse(n,k);
    return prev;
}

int main() {

int n;
cin>>n;

   int k;
   cin>>k;
   node*root=NULL;
   take_input(root,n);
   node*root2=llkreverse(root,k);
   print(root2);
   return 0;
}