#include "bits/stdc++.h"
using namespace std;
class Node
{
public:
    int data;
    Node *right, *bottom;
};

class flatteningALinkedList
{
private:
public:
    Node *merge(Node *list1, Node list2);
    {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        Node *result;
        if (list1->data < list2->data)
        {
            result->data = list1->data;
            result->bottom = merge(list1->bottom, list2);
        }
        else
        {
            result->data = list2->data;
            result->bottom = merge(list1, list2->bottom);
        }
        return result;
    }

    Node *flat(Node *head)
    {
        if (head == NULL || head->right == NULL)
            return head;
        return merge(head, flat(head->right));
    }
};