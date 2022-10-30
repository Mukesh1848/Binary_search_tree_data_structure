
class Solution {
 private:
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
public:
Node*solve(vector<int>&nums,int l,int h){
    if(l<=h){
        int mid=(l+h)/2;
        Node*cur=new Node(nums[mid]);
        cur->left=solve(nums,l,mid-1);
        cur->right=solve(nums,mid+1,h);
        return cur;
    }
    return NULL;
}
  void pre(Node*head,vector<int>&v){
      if(!head)
      return ;
      v.push_back(head->val);
      pre(head->left,v);
      pre(head->right,v);
  }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        int l=0,h=nums.size()-1;
        Node*head=solve(nums,l,h);
        vector<int>v;
        pre(head,v);
        return v;
    }
};
