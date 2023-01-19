#include <iostream>
#include <stdio.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* mergeLists(ListNode* list1, ListNode* list2);

int main(){
// Test cases:
ListNode* list1 = new ListNode;
ListNode* list2 = new ListNode;

}

ListNode* mergeLists(ListNode* list1, ListNode* list2){

    ListNode* head = new ListNode;
    
    if(list1 == NULL){ // return either list if one is NULL respectively
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }

    if(list1->val < list2->val){
        head = list1;
        list1 = list1->next;
    }
    else{
        head = list2;
        list2 = list2->next;
    }
    
    ListNode* temp = new ListNode;
    temp = head;

    while(list1 && list2){
        if(list1->val < list2->val){
            temp->next = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    if(list1 == NULL){
        temp->next = list2;
    }
    else{
        temp->next = list1;
    }
    return temp;
}

