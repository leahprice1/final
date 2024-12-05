#ifndef EVIDENCE_H
#define EVIDENCE_H

#include <iostream>
#include <string>
#include <ctime> // for generating a seed for generating random numbers
#include <random> // for generating random numbers
#include <vector> // for the inventories that can be resized where I don't want to deal with adding elements
using namespace std;


class Evidence {
    public:
        string name;
        string description;
        int monthday;

        // Constructor to initialize Evidence data
        Evidence(string n, string d, int m) : name(n), description(d), monthday(m) {}
        Evidence() : name(""), description(""), monthday(0) {}

};

// Define a Node structure for the BST
struct Node {
    Evidence data;  // Store evidence
    Node* left;     // Left child
    Node* right;    // Right child

    // Constructor for creating a new node
    Node(Evidence e) : data(e), left(nullptr), right(nullptr) {}
};

// Define the Binary Search Tree class
class EvidenceBST {
    private:
        Node* root;  // Root node of the BST

        // Helper function to insert evidence in the BST
        void insert(Node*& node, Evidence e) {
            if (node == nullptr) {
                node = new Node(e);  // Create a new node if position is found
            } else if (e.monthday < node->data.monthday) {
                insert(node->left, e);  // Insert in the left subtree if the year is smaller
            } else {
                insert(node->right, e);  // Insert in the right subtree if the year is larger
            }
        }

        Node* findNodeByYear(Node* node, int year) const {
            if (node == nullptr) {
                return nullptr;  // Base case: node not found
            }
            if (year == node->data.monthday) {
                return node;  // Node with the specified year is found
            } else if (year < node->data.monthday) {
                return findNodeByYear(node->left, year);  // Search in the left subtree
            } else {
                return findNodeByYear(node->right, year);  // Search in the right subtree
            }
        }


        Node* findMin(Node* node) {
            while (node != nullptr && node->left != nullptr) {
                node = node->left;  // Keep going to the left to find the minimum
            }
            return node;
        }

        // Helper function to remove a node by year
        Node* removeNodeByYear(Node* node, int year) {
            if (node == nullptr) {
                return node;  // Base case: if node is null, simply return null
            }

            // If the year is smaller, go to the left subtree
            if (year < node->data.monthday) {
                node->left = removeNodeByYear(node->left, year);
            }
            // If the year is larger, go to the right subtree
            else if (year > node->data.monthday) {
                node->right = removeNodeByYear(node->right, year);
            }
            // If the year matches, we found the node to delete
            else {
                // Case 1: No children (leaf node)
                if (node->left == nullptr && node->right == nullptr) {
                    delete node;  // Deallocate memory for the node
                    return nullptr;
                }
                // Case 2: One child (either left or right)
                else if (node->left == nullptr) {
                    Node* temp = node;
                    node = node->right;  // Replace node with its right child
                    delete temp;
                }
                else if (node->right == nullptr) {
                    Node* temp = node;
                    node = node->left;   // Replace node with its left child
                    delete temp;
                }
                // Case 3: Two children
                else {
                    Node* temp = findMin(node->right);  // Get the smallest node in the right subtree
                    node->data = temp->data;  // Copy the data from the successor
                    node->right = removeNodeByYear(node->right, temp->data.monthday);  // Recursively remove the successor
                }
            }
            return node;
        }

        // Helper function to print the BST in-order (ascending order by year)
        void printInOrder(Node* node) const {
            if (node != nullptr) {
                printInOrder(node->left);  // Visit left child
                cout << node->data.monthday << ": " << node->data.name << " - " << node->data.description << endl;
                printInOrder(node->right);  // Visit right child
            }
        }

        void printDescription(Node* node) const {
            if (node != nullptr) {
                printDescription(node->left);  // Visit left child
                cout << node->data.description << endl;
                printDescription(node->right);  // Visit right child
            }
        }

        void printName(Node* node) const {
            if (node != nullptr) {
                printName(node->left);  // Visit left child
                cout << node->data.name << endl;
                printName(node->right);  // Visit right child
            }
        }

    public:
        // Constructor for the BST
        EvidenceBST(){
            root = nullptr;
        }

        // Function to insert evidence into the BST
        void insert(Evidence e) {
            insert(root, e);
        }

        // Function to print the evidence in the tree in order (by year)
        void printInOrder() const {
            printInOrder(root);
        }

        void removeNodeByYear(int year){
            root = removeNodeByYear(root, year);
        }

        Node* findNodeByYear(int year) const{
            return findNodeByYear(root, year);
        }

        Evidence findEvidenceByYear(int year) const {
            Node* current = root; // Start at the root of the tree
            while (current != nullptr) {
                if (year == current->data.monthday) { // Use `data.monthday` instead of `evidence.year`
                    return current->data; // Return the Evidence object directly
                } else if (year < current->data.monthday) { // Use `data.monthday`
                    current = current->left; // Search in the left subtree
                } else {
                    current = current->right; // Search in the right subtree
                }
            }
            throw runtime_error("Evidence not found for the given year."); // Handle case when evidence is not found
        }

        void printNameByYear(int year) const {
            Node* result = findNodeByYear(root, year);
            if (result != nullptr) {
                cout << result->data.name << endl;
            } else {
                cout << "No node found with year " << year << "." << endl;
            }
        }

        void printDescriptionByYear(int year) const {
            Node* result = findNodeByYear(root, year);
            if (result != nullptr) {
                cout << result->data.description << endl;
            } else {
                cout << "No node found with year " << year << "." << endl;
            }
        }
};

#endif