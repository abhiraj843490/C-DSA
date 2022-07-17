#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
}*head;

void insert(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
    newnode->data = data;
    newnode->next = NULL;

    // if empty its is first node being entered
    if(head == NULL){
        head = newnode;
        return;
    }
    
    struct node* temp = head;
    
    // traverse to the last node
    while(temp->next!=NULL)
        temp = temp->next;
    
    temp->next = newnode;

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

void search(int ser){
    if(head==NULL){
        printf("NULL");
        return;
    }
    struct node*temp=head;
    int flag;
    while(temp!=NULL){
        if(temp->data!=ser){
            flag=0;
        }
        else{
            flag=1;
        }
        temp=temp->next;
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
}

int main() {
    int n,val,ser;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        insert(val);
    }
    
    display();
    scanf("%d",&ser);
    search(ser);
    return 0;
}
