#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
}*head;

void insert(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node*));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return;
    }
    struct node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

void display(){
    if(head==NULL){
        printf("NULL");
        return;
    }
    struct node*temp=head;
    while(temp->next!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

void delete(){
    
    if(head==NULL){
        printf("NULL");
        return;
    }
    struct node*temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;
    free(temp->next);
    temp->next=NULL;

    
}


int main() {
    
    int n,val,del;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        insert(val);
    }
    scanf("%d",&del);
    for(int i=0;i<del;i++){
        delete();
    }
    display();
    return 0;
}
