#ifndef INVENTORY_H
#define INVENTORY_H
#include "evidence.h"

#include <iostream>
#include <string>
#include <ctime> // for generating a seed for generating random numbers
#include <random> // for generating random numbers
#include <vector> // for the inventories that can be resized where I don't want to deal with adding elements
using namespace std;


// Node structure for integers
struct invNode {
    Evidence eviden;       // Data stored in the node
    invNode* next;     // Pointer to the next node

    // Constructor to initialize a node
    invNode(const Evidence& e) : eviden(e), next(nullptr) {}

};

// Linked List class for integers
class Inventory {
  private:
      invNode* head; // Pointer to the first node in the list

  public:
      // Constructor to initialize an empty list
      Inventory(){
        head = nullptr;
      }

      // Destructor to clean up memory
      ~Inventory() {
        invNode* current = head;
        while (current != nullptr) {
          invNode* next = current->next;   // Store the current head
          delete current;   // Move to the next node
          current = next;         // Delete the old head
        }
      }

      // Function to add a new element to the end of the list
      void append(const Evidence& e) {
          invNode* newNode = new invNode(e);
          if (head == nullptr) {
              head = newNode;
          } else {
              invNode* current = head;
              while (current->next != nullptr) {
                  current = current->next;
              }
              current->next = newNode;
          }
      }

      // Function to remove the first occurrence of a value

      void printlist() const {
            invNode* current = head;
            while (current != nullptr) {
                cout << current->eviden.name << ": " 
                     << current->eviden.description << endl;
                current = current->next;
            }
      }

      // Function to check if the list is empty
      bool isEmpty() const {
          return head == nullptr;
      }

      int sizeofinventory() const {
          int count = 0;
          invNode* current = head;

          // Traverse the list and increment the count for each node
          while (current != nullptr) {
              count++;
              current = current->next;
          }
          return count; // Return the total count
      }
};


#endif