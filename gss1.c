#include<stdio.h>
#include<stdlib.h>
//defining the data structure for segment tree .
typedef struct {
    int leftsum , rightsum , sum;
    struct node* right;
    struct node * left;
    }node;
//making a segment tree
int makeSegmentTree(int arr[] ,node* segment, int low , int high)
{
    if(low==high)
    {
        segment->sum= low;
        segment->left = segment->right = low;
        return segment->sum;
    }
    int mid = (low+high)/2;
    segment->left= (node*)(malloc(sizeof(node)));
    segment->right = (node*)(malloc(sizeof(node)));
    segment->sum = makeSegmentTree(max(segment->left->sum,segment->right->sum,(segment->left->sum+segment->right->sum)));
    
    
