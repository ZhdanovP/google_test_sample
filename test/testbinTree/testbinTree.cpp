#include "binTree.hpp"
#include "gtest/gtest.h"

class BinTreeTest : public ::testing::Test {
};

TEST_F(BinTreeTest, ByDefaultBazTrueIsTrue) {
    binary_tree::node *root = binary_tree::newNode(1);
  
    root->left = binary_tree::newNode(2);
    root->right = binary_tree::newNode(3);
    root->left->left = binary_tree::newNode(4);
    root->left->right = binary_tree::newNode(5);

    const auto expected = 3;
    const auto actual = binary_tree::maxDepth(root);
      
    EXPECT_EQ(expected, actual);
}