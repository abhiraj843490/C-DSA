#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}

//BODY STARTS HERE


/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
void print(LinkedListNode* head) {
    if(head){
    LinkedListNode* temp = head;
    while(temp){
        printf("%d ",temp->val);
        temp=temp->next;
    }
    }
}
void ReversePrint(LinkedListNode* head) {
    
    if(head==NULL)
        return;
    
    LinkedListNode* prev =NULL;
    LinkedListNode* curr =NULL;
    LinkedListNode* temp=head;
    
    while(temp){
        curr = temp->next;                   
        temp->next=prev;
        prev=temp;
        temp=curr;
        
    }
    head=prev;
    print(head);
}
    



//BODY ENDS HERE

int main()
{
    int head_size = 0;

    LinkedListNode* head = NULL;
    LinkedListNode* head_tail = NULL;

    scanf("%d\n", &head_size);
    for(int i = 0; i < head_size; i++) {
        int head_item;
        scanf("%d", &head_item);
        head_tail = _insert_node_into_singlylinkedlist(head, head_tail, head_item);

        if(i == 0) {
            head = head_tail;
        }
    }


    ReversePrint(head);
    
    return 0;
}
