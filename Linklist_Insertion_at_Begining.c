#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
}*head;

void ins(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int val; scanf("%d",&val);
    
     struct node* newnode =(struct node*)malloc(sizeof(struct node*));
    if(head==NULL){
        head=newnode;
        newnode->data=val;
    }
   else{
       newnode->data=val;
       newnode->next=head;
       head=newnode;
       }
}
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

int main() {
    ins();
    dis();
    return 0;
}