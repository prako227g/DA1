#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

int getLength(struct ListNode* head) {
    int length = 0;
    while (head != NULL) {
        length++;
        head = head->next;
    }
    return length;
}

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    int length = getLength(head);
    k %= length;
    if (k == 0) {
        return head;
    }
    struct ListNode *fast = head, *slow = head;
    for (int i = 0; i < k; i++) {
        fast = fast->next;
    }
    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    struct ListNode *newHead = slow->next;
    slow->next = NULL;
    fast->next = head;
    return newHead;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Create a linked list
    struct ListNode *head = (struct ListNode*) malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = (struct ListNode*) malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = (struct ListNode*) malloc(sizeof(struct ListNode));
    head->next->next->val = 3;
    head->next->next->next = (struct ListNode*) malloc(sizeof(struct ListNode));
    head->next->next->next->val = 4;
    head->next->next->next->next = (struct ListNode*) malloc(sizeof(struct ListNode));
    head->next->next->next->next->val = 5;
    head->next->next->next->next->next = NULL;

    // Rotate the linked list to the right by 2 places
    struct ListNode *newHead = rotateRight(head, 2);

    // Print the rotated linked list
    printList(newHead);

    return 0;
}
