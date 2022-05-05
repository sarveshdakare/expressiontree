#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char data;
    struct node *right, *left, *next;
};

struct node *top = NULL;

struct node *createNode(char data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;

    return(node);
}

void Inorder(struct node *node)
{
    
}

int main()
{
    struct node *p, *q, *root;

    int n;
    printf("Enter the length of exprssion : ");
    scanf("%d", &n);

    char s[n];
    printf("Enter the expression : ");
    scanf("%s", s);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            root = createNode(s[i]);
            p = pop();
            q = pop();
            root->left = q;
            root->right = p;
            push(root);
        }
        else
        {
            root = createNode(s[i]);
            push(root);
        }
    }

    printf("\nInorder expression : ");
    Inorder(root);
    printf("\nPostorder expression : ");
    Postorder(root);
    printf("\nPreorder expression : ");
    Preorder(root);
