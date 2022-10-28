
Node* inOrder(Node* root , vector<int> &in){
      
      if(root==NULL){
          return NULL;
      }
      
      inOrder(root->left , in);
      in.push_back(root->data);
      inOrder(root->right , in);
}

Node* inOrderToBST( vector<int> & in , int s , int e){
    // base case 
    if(s>e){
        return NULL;
    }
    
     int mid = (s+e)/2;
     
     Node* newRoot = new Node(in[mid]);
     
     newRoot->left = inOrderToBST( in , s , mid-1);
     newRoot->right = inOrderToBST( in , mid+1 , e);
     return newRoot;
}

Node* buildBalancedTree(Node* root)
{

      vector<int>inOrderVal;
      
      inOrder(root , inOrderVal);
      
      int n = inOrderVal.size()-1;
      
      return inOrderToBST(inOrderVal ,0 , n);
}
