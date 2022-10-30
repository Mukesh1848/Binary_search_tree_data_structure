
class Solution{
  public:
  
  void inOrder(Node* root , Node* x , Node* succ){
      
      if(root==NULL)
          return ;
    
        inOrder(root->left , x , succ);
       if(root->data > x->data && !succ->left){
           succ->left = root;
           return;
       }
        inOrder(root->right , x , succ);
        
  }
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
      Node* succ = new Node(0);
      
      inOrder(root , x , succ);
      
      return succ->left;
    }
};
