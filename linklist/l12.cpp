//Add Number Linked Lists
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Reverse a linked list
ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    while (head) {
        ListNode* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

// Remove leading zeros
ListNode* removeLeadingZeros(ListNode* head) {
    while (head && head->val == 0 && head->next) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}

// Add two reversed lists
ListNode* addReversed(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* cur = &dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;
        if (l1) { sum += l1->val; l1 = l1->next; }
        if (l2) { sum += l2->val; l2 = l2->next; }

        carry = sum / 10;
        cur->next = new ListNode(sum % 10);
        cur = cur->next;
    }

    return dummy.next;
}

// Add two numbers in forward order
ListNode* addNumbersForward(ListNode* num1, ListNode* num2) {
    // Step 1: Reverse input lists
    num1 = reverse(num1);
    num2 = reverse(num2);

    // Step 2: Add reversed lists
    ListNode* sumReversed = addReversed(num1, num2);

    // Step 3: Reverse result
    ListNode* result = reverse(sumReversed);

    // Step 4: Remove leading zeros
    return removeLeadingZeros(result);
}

// Utility to print list
void print(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // num1 = 1 -> 9 -> 0 (190)
    ListNode* num1 = new ListNode(4);
    num1->next = new ListNode(5);
    //num1->next->next = new ListNode(0);

    // num2 = 2 -> 5 (25)
    ListNode* num2 = new ListNode(3);
    num2->next = new ListNode(4);
    num2->next->next = new ListNode(5);

    ListNode* result = addNumbersForward(num1, num2);
    cout << "Result: ";
    print(result);  // Output: 2 -> 1 -> 5 (215)

    return 0;
}
