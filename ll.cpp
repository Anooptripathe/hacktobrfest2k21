#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node* next;node* prev;
  node(int val){
    data=val;
    next=NULL;
    prev=NULL;
  }
};
void insertathead(node* &head,int val){
  node* t= new node(val);
  t->next=head;
  if(head!=NULL)
    head->prev=t;
  head=t;
}
void insertattail(node* &head,int val){
  //node* n=new node(val);
  if(head==NULL){
    insertathead(head,val);
    return;
  }
  node* n=new node(val);
  node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=n;
  n->prev=temp;
}

void display(node* &head){
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
bool searcch(node* head,int key){
  node* temp=head;
  while(temp!=NULL){
    if(temp->data==key){
      return true;
    }
    temp=temp->next;
  }
  return false;
}
 node * lasttofront( node *head){
node* fast=head->next;
node*slow=head;
while(fast->next!=NULL){
  fast=fast->next;
  slow=slow->next;
} 
fast->next=head;
slow->next=NULL;
node* newhead=fast;
return newhead;
}
 void startingpointofloop(node* head){
  node* fast=head;
  node* slow=head;
   while(slow!=fast){
    slow=slow->next;
    fast=fast->next->next;
   }
   fast=head;
   while(fast!=slow){
    fast=fast->next;
    slow=slow->next;
   }
   cout<<slow->data;

 }
 int pairsum(node* head,node* last,int n){
  node* temp=head;
  node*p=head;
  int ct=0;
  /*while(temp->next!=NULL){
    temp=temp->next;
  }*/
  node* q=last;
  while(p!=NULL&&q!=NULL&&p->data!=q->data &&q->next!=p){
    
    if(p->data+q->data==n){
     // cout<<p->data<<" "<<q->data<<" ";
      //cout<<endl;
      ct++;
      p=p->next;
      q=q->prev;
    }
    else if(p->data + q->data>n){
       q=q->prev;
    }
    else{
      p=p->next;
    }
  
  }
  return ct;
 }
 void trip(node* head,int n){
  if(head==NULL)
    return;
 // node* temp=head;
  int ct=0;
  node* p1=head;
  node* p3=head;
  //node* p2=head->next;
  //node* p3=head->next->next;
  while(p3->next!=NULL){
    p3=p3->next;
  }
  while(p1->next!=NULL){
    node* p2=p1->next;
    int var=n-(p1->data);
    ct+=pairsum(p2,p3,var);
    p1=p1->next;
    }
    cout<<"the count is :"<< ct<<endl;
  }
 

int main(){
  node* head=NULL;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int val;
    cin>>val;
    insertattail(head,val);
  }
  display(head);
  cout<<endl;
 // startingpointofloop(head);
  int num;
  cin>>num;
  //pairsum(head,num);
  trip(head,num);

  //node*nhead=lasttofront(head);
  //display(nhead);
}
