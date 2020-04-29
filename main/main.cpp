#include <iostream>
#include "binTree.hpp"

int main(int argc, char *argv[])
{
	binary_tree::node *root = binary_tree::newNode(1);
  
    root->left = binary_tree::newNode(2);
    root->right = binary_tree::newNode(3);
    root->left->left = binary_tree::newNode(4);
    root->left->right = binary_tree::newNode(5);
      
    std::cout << "Height of tree is " << binary_tree::maxDepth(root) << "\n";
}
