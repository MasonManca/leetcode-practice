#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

    // Beginning of method declarations      
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

// You are given two non-empty linked lists representing two non-negative integers. 
// The digits are stored in reverse order 
// and each of their nodes contains a single digit.
//  Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero
// except the number 0 itself.

/* 
example input and outputs:
1) 
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

2) 
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

3) 
Input: l1 = [0], l2 = [0]
Output: [0]

*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // loops for finding the size of the linked lists

        int sumOfFirst, sumOfSecond = 0;
        ListNode* resultList = new ListNode;
        ListNode* tempNode = new ListNode;
        // Loops for storing the values inside of an integer, still backwards at this point
        while(l1->next != nullptr){
            sumOfFirst = sumOfFirst + l1->val;
            l1 = l1->next;
        }
        while(l2->next != nullptr){
            sumOfSecond = sumOfSecond + l1->val;
            l2 = l2->next;
        }
        int reversedFirst, reversedSecond, remainder = 0;
        while(sumOfFirst != 0) {
            remainder = sumOfFirst % 10;
            reversedFirst = reversedFirst * 10 + remainder;
            sumOfFirst /= 10;
        }
        return resultList;
    }
};

int main(){
    ListNode* l1 = new ListNode(2,l1->next,4,l1->next->next);
    ListNode* l2 = new ListNode;
// 342 + 465 = 807.
// Output should be 7->0->8
// 243 -> 342
    l1->val = 2;
    l1 = l1->next;
    l1->val = 4;
    l1 = l1->next;
    l1->val = 3;
    l1->next = NULL;
        
// 564 -> 465
    l2->val = 5;
    l2 = l1->next;
    l2->val = 6;
    l2 = l1->next;
    l2->val = 4;
    l2->next = NULL;
    cout << "here\n";
}