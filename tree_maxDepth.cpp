#include<iostream>
using namespace std;

class Tree {
public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int maxdepth(Tree* root)
{
     if(root==NULL){
        return 0;
     }
     int l=maxdepth(root->left);
     int r=maxdepth(root->right);

     return 1+max(l,r);
}

int main(){
    
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
    cout<<maxdepth(head);
}