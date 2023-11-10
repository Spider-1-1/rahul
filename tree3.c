
<html>
<head>
    
</head>
<body>
<h3>Code:</h3>
    <div id="div4">
        <pre>
#include &lt;stdio.h&gt; 
#include &lt;stdlib.h&gt; 



struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void leftViewUtil(struct Node* root, int depth, int* maxDepth) {
    if (root == NULL) {
        return;
    }

    if (depth > *maxDepth) {
    
        printf("%d ", root->data);
        *maxDepth = depth;
    }

    leftViewUtil(root->left, depth + 1, maxDepth);
    leftViewUtil(root->right, depth + 1, maxDepth);
}

void leftView(struct Node* root) {
    int maxDepth = 0;
    leftViewUtil(root, 1, &maxDepth);
}

int main() {
 
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    printf("Left view of binary tree: ");
    leftView(root);

    return 0;
}


        </pre>
    </div>
<h3>output</h3>
    <div id="div5">
        <pre>
Left view of binary tree: 1 2 4
--------------------------------
    </div>
</body>
</html>
