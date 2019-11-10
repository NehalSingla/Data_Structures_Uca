#include<iostream>
#include<queue>
using namespace std;
class Node
{
	public:
		int data;
		Node *next[2];
		Node(int data)
		{
			this->data=data;
			next[0]=next[1]=NULL;
		}
};
void print_level(Node *root)
{
	if(root==NULL)
		return;

	queue<Node *>q;
	q.push(root);
	while(q.empty()==false){
		int count=q.size();
		while(count>0){
		Node *node=q.front();
		cout<<node->data<<" ";
		q.pop();
		if(node->next[0]!=NULL)
			q.push(node->next[0]);
		if(node->next[1]!=NULL)
			q.push(node->next[1]);
		count--;
	}
		cout<<endl;
	}
}

void insert(Node *root,int key)
{
    queue<Node*> q;
    q.push(root);

   
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (!temp->next[0]) {
            temp->next[0] = new Node(key);
            break;
        } else
            q.push(temp->next[0]);

        if (!temp->next[1]) {
            temp->next[1] = new Node(key);
            break;
        } else
            q.push(temp->next[1]);
    }
}

Node *construct_Tree(Node *root,int arr[],int start,int end)
{
	if(start>end)
	        return NULL;
	root=new Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_Tree(root->next[0],arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_Tree(root->next[1],arr,2*start+2,end);
	return root;
}

int main(int argc,char *argv[])
{
	int arr[argc],k=0;
	for(int i=1;i<argc-1;i++){
		arr[k]=atoi(argv[i]);
		k++;
	}
	Node *root=construct_Tree(root,arr,0,k);
	print_level(root);
	cout<<endl;
	insert(root,atoi(argv[argc-1]));
	cout<<"Tree after inserting new value"<<endl;
	print_level(root);
	return 0;
}
