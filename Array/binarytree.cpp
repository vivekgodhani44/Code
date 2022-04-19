#include <bits/stdc++.h>
using namespace std;
int FindHeight(struct Node* node)
{
    if(node==NULL)
        return 0;
    int leftheight=FindHeightOfBT( node->left);
    int rightheight=FindHeightOfBT( node->right);
    
    return max(leftheight,rightheight)+1;
    
}