class Solution {
  public:
  
  int solve(Node* root , int &count , int k){
      
      if(root==NULL){
          return -1;
      }
      
      // left 
      
      int left = solve(root->left , count , k);
      
      if(left!= -1){
          return left;
      }
      
    //   print (N)
    
     count++;
    
    if(count == k){
        return root->data;
    }
    
    // right 
    
    return solve(root->right , count ,k);
  }
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
     
     int count =0;
     
     int ans  = solve(root , count , K);
     
     return ans;
    }
};
