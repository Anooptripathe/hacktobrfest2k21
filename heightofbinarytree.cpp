#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};
int calcheight(node* root)
{
	if(root==NULL)
		return -1;
	int lh=calcheight(root->left);
	int rh=calcheight(root->right);
	return max(lh,rh)+1;
}
int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	cout<<"height of binary tree is:"<<calcheight(root)<<endl;

}
