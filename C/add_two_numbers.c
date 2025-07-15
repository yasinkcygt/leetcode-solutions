// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // Create a dummy node to serve as the head of the result list
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = NULL;

    // Pointer to build the new linked list
    struct ListNode* current = dummy;

    // Variable to store the carry from addition
    int carry = 0;

    // Loop while there are digits to process in l1 or l2, or there is a carry
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;

        // Add value from l1 if it exists
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        // Add value from l2 if it exists
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        // Create a new node for the digit in the result
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum % 10; // Store the last digit of the sum
        newNode->next = NULL;

        // Append the new node to the result list
        current->next = newNode;
        current = newNode;

        // Update carry for next iteration
        carry = sum / 10;
    }

    // Return the result list (skipping the dummy node)
    return dummy->next;
}
s