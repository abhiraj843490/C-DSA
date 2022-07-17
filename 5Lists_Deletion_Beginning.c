#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
}* head;

void insert(int data){
    
    struct node* newNode = (struct node*) malloc(sizeof(struct node*));
    newNode->data = data;
    newNode->next = NULL;

    // if empty its is first node being entered
    if(head == NULL){
        head = newNode;
        return;
    }
    
    struct node* temp = head;
    
    // traverse to the last node
    while(temp->next!=NULL)
        temp = temp->next;
    
    temp->next = newNode;
    
    //printf("%d inserted at the end\n", data);
    
}

void dis(){
    if(head==NULL){
        printf("NULL");
        return;
    }
    struct node* temp = head;
        // struct node *seclast=NULL;
        while(temp->next!=NULL){
                printf("%d->", temp->data);
                temp=temp->next;
            }   
                printf("%d",temp->data);
}

void delete(){
    if(head==NULL){
        printf("NULL");
        return;
    }
    else{
        struct node* temp=head;
        
            head=temp->next;
            free(temp);
        
    }
}

int main() {
   int n,del;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int val;
        scanf("%d",&val);
        insert(val);
    }
    scanf("%d",&del);
    for(int i=0;i<del;i++){
        delete();
    }
    
    dis();
    return 0;
}
