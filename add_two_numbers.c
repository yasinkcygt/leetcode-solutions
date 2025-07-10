// Problem: Add Two Numbers
// Link: https://leetcode.com/problems/add-two-numbers/
// Language: C

#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list node.
struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // Create a dummy node to simplify result list construction
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = NULL;

    // Pointer to build the result list
    struct ListNode* current = dummy;

    // Initialize carry to handle sums >= 10
    int carry = 0;

    // Loop through both lists until all digits and carry are processed
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry; // Start with the carry value from previous iteration

        // Add value from l1 if available
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        // Add value from l2 if available
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        // Create a new node with the digit value (sum mod 10)
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum % 10;
        newNode->next = NULL;

        // Append the new node to the result list
        current->next = newNode;
        current = newNode;

        // Update carry (0 or 1 if sum >= 10)
        carry = sum / 10;
    }

    // Return the result list, skipping the dummy node
    return dummy->next;
}
