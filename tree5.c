
<html>
<head>
    
</head>
<body>
<h3>Code:</h3>
    <div id="div4">
        <pre>
#include &lt;stdio.h&gt; 
#include &lt;stdlib.h&gt; 
struct node {
    char data;
    struct node* left;
    struct node* right;
};

int search(char arr[], int start, int end, char value);
struct node* newnode(char data);
struct node* buildtree(char inorder[], char preorder[], int start, int end);
void printpostorder(struct node* node);

int main() {
    char inordered[100], preordered[100];
    int len = 10,i;
    printf("Enter the inorder traversal: ");
    for ( i = 0; i < len; i++) {
        scanf(" %c", &inordered[i]);
    }

    printf("Enter the preorder traversal: ");
    for ( i = 0; i < len; i++) {
        scanf(" %c", &preordered[i]);
    }

    struct node* root = buildtree(inordered, preordered, 0, len - 1);
    printf("Tree constructed with inorder and preorder traversals\n");

    printf("Postorder traversal of the constructed tree is \n");
    printpostorder(root);

    return 0;
}

int search(char arr[], int start, int end, char value) {
    int i;
    for (i = start; i <= end; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

struct node* newnode(char data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

struct node* buildtree(char inorder[], char preorder[], int start, int end) {
    static int index = 0;
    if (start > end)
        return NULL;

    struct node* tnode = newnode(preorder[index++]);
    if (start == end)
        return tnode;

    int inindex = search(inorder, start, end, tnode->data);
    tnode->left = buildtree(inorder, preorder, start, inindex - 1);
    tnode->right = buildtree(inorder, preorder, inindex + 1, end);
    return tnode;
}

void printpostorder(struct node* node) {
    if (node == NULL)
        return;

    printpostorder(node->left);
    printpostorder(node->right);
    printf("%c ", node->data);
}


        </pre>
    </div>
<h3>output</h3>
    <div id="div5">
        <pre>
Enter the inorder traversal: 4535634435
Enter the preorder traversal: 3456543435
Tree constructed with inorder and preorder traversals
Postorder traversal of the constructed tree is
5 4 5 3 5 3 4 4 6 3
--------------------------------
</pre>
    </div>
</body>
</html>
