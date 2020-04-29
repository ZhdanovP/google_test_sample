#include "binTree.hpp"

namespace binary_tree {

/* Compute the "maxDepth" of a tree -- the number of  
    nodes along the longest path from the root node  
    down to the farthest leaf node.*/
int maxDepth(node* node)  
{  
    if (nullptr == node)
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);  
        int rDepth = maxDepth(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
    }  
}  
  
/* Helper function that allocates a new node with the  
given data and NULL left and right pointers. */
node* newNode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = nullptr;  
    Node->right = nullptr;  
      
    return(Node);  
} 

}  // binary_tree
