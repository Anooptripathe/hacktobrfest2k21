#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* next;
	node(int val)
	{
		data=val;
		next=NULL;

	}
};
void insertattail(node* &head,int val)
{
	node* n=new node(val);
	if(head==NULL)
	{
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
void insertathead(node* &head,int val)
{
	node* temp=new node(val);
	temp->next=head;
	head=temp;
}
void display(node* &head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
cout<<"NULL"<<endl;
}
void removeduplicate(node* &head)
{
	node* temp=head;
	node *n1;
	if(temp==NULL)
		return;
	while(temp->next!=NULL)
	{
		if(temp->data==temp->next->data)
		{
			n1=temp->next->next;
			free(temp->next);
			temp->next=n1;

		}
		else
			temp=temp->next;

	}
}
int main()
{
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,5);
	insertattail(head,5);
	display(head);
	removeduplicate(head);
	display(head);
	
}
