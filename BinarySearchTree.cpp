#include <iostream>
using namespace std;

class Node
{
    public:
        int info;
        Node *leftchild;
        Node *rightchild;

        //Constructor for the node class
        Node()
        {
            leftchild = nullptr;  // Initialize left child to null
            rightchild = nullptr; // Initialize right child to null
        }
};

class BinaryTree
{
    public:
        Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initialize ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukan nilai :";
        cin >> x;

        // Step 1: Allocate memory for a new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data field of new node
        newNode->info = x;

        // Setep 3: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // Step 4: Locate the node which will be the parent of the new node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        seacrh(x, parent, currentNode);
    }
};
