bool rootToNodePath(Tree* root, vector<int>& ans, int val) 
{
    if (root == NULL)
        return false;

    ans.push_back(root->data);
    if (root->data == val) {
        return true;
    }

    if(rootToNodePath(root->left, ans, val) || rootToNodePath(root->right, ans, val))
    return true;

    ans.pop_back();
    return false;
}

int main()
{
    Tree* n1 = new Tree(1);
    Tree* n2 = new Tree(2);
    Tree* n3 = new Tree(3);
    
    Tree* n4 = new Tree(4);
    Tree* n5 = new Tree(5);
    Tree* n6 = new Tree(6);
    Tree* n7 = new Tree(7);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    Tree* head = n1;
    //preorder(head);
    //postorder(head);
    //cout<<maxDepth(head);
    //cout<<check(n1->left, n1->right);
    vector<vector<int>> ans;
    vector<int> q;
    //Paths(head, ans, q);
    rootToNodePath(n1, q, 5);
    for (auto i : ans) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}