// This program illustrates the building  
// and traversal of a linked list.
#include <iostream>
#include <fstream>
#include "ListNode.h"
using namespace std;


int main()
{  
   double number;
   ListNode* n = nullptr;// Used to read the file
   ListNode* p=nullptr;// = numberList;
   // Open the file
   ifstream numberFile("numberFile.dat");
   if (!numberFile) 
   {
      cout << "Error in opening the file of numbers."; 
      exit(1);
   } 	  
   // Read the file into a linked list    
   cout << "The contents of the file are: " << endl;
   while (numberFile >> number)
   {
      cout << number << "  ";
      // Create a node to hold this number
      p = new ListNode(n,p, number);
      n = p;

   }
   // Traverse the list while printing
   cout << endl << "The contents of the list are: " << endl;
   ListNode *ptr = p;
   while (ptr->prev != nullptr) { ptr = ptr->prev; }
   while (ptr != nullptr)
   {
      cout << ptr->value << "  "; // Process node
      ptr = ptr->next;            // Move to next node
   }
   return 0;
}