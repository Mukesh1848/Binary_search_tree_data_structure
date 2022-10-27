class Solution
{
    public:
    int solve(Node* root , int &count , int k){
      
      if(root==NULL){
          return -1;
      }
      
      
      // left 
      
      int right = solve(root->right , count , k);
      
      if(right!= -1){
          return right;
      }
      
    //   print (N)
    
     count++;
    
    if(count == k){
        return root->data;
    }
    
    // right 
    
    return solve(root->left , count ,k);
  }
  
    int kthLargest(Node *root, int K)
    {
        int count =0;
     
     int ans  = solve(root , count , K);
     
     return ans;
    }
};
