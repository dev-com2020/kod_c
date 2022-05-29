#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _tree
{
    void *data;
    struct _tree *left;
    struct _tree *right;
} TreeNode;

void insertNode(TreeNode **root, COMPARE compare, void *data)
{
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    if (*root == NULL)
    {
        *root = node;
        return;
    }
    while (1)
    {
        if (compare((*root)->data, data) > 0)
        {
            if ((*root)->left != NULL)
            {
                *root = (*root)->left;
            }
            else
            {
                (*root)->left = node;
                break;
            }
        }
        else
        {
            if ((*root)->right != NULL)
            {
                *root = (*root)->right;
            }
            else
            {
                (*root)->right = node;
                break;
            }
        }
    }
}