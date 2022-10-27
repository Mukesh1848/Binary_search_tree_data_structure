
int minValue(Node* root) {
    
    if(root==NULL){
        return -1;
    }
    
    if(root->left==NULL && root->right==NULL){
        return root->data;
    }
    
  if(root->left==NULL && root->right!=NULL){
      return root->data;
    }
     
     Node* temp = root;
     
     while(temp->left!=NULL){
         temp = temp->left;
     }
     return (temp->data);
}

