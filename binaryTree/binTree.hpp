
namespace binary_tree {
/* A binary tree node has data, pointer to left child 
and a pointer to right child */
class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
};  

int maxDepth(node* node);
node* newNode(int data);

} // binary_tree