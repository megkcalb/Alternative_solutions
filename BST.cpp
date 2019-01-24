#include<iostream>

using namespace std;

struct node {

        int key ;

        struct node *left, *right ;
};

void inorder(struct node* nod1){

        if(nod1 != NULL){
                inorder(nod1 ->left);
                cout << endl << nod1 -> key << endl;
                inorder(nod1 ->right);
        }
}

struct node* newnode(int item){

        struct node* temp = (struct node*) malloc ( sizeof(struct node));

        temp -> key = item;

        temp -> left = temp -> right = NULL;

        return temp;
}

struct node* insert( struct node* nod , int val ){

        if( nod == NULL )
                return newnode(val);

        if ( val < nod -> key)
                nod -> left = insert(nod ->left, val);

        else if(val > nod -> key)
                nod -> right = insert(nod ->right, val);

        return nod;
}
int main(){

        struct node *root = NULL;

        root = insert(root, 20);

        insert(root, 45);

        insert(root, 12);

        insert(root, 56);

        inorder(root);

        return 0;
}
