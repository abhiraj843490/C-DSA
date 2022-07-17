#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
}*head;

void ins(int pos, int data){

    int count=0;
    struct node*newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return;
    }

    if(pos==0){
        head=newnode;
        newnode->data=v;
    }
    else{
        struct node* prev=NULL;
        struct node* temp=head;
        
        while(--n){
            prev=temp;
            temp=temp->next;
            if(temp==NULL){
                break;
            }
            newnode->next=temp;
            prev->next=newnode;
        }
    }
}    


void dis(){
    if(head==NULL){
        printf("NULL");
    }
    struct node* temp = head;
    while(temp->next!=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }   
    printf("%d",temp->data);
}


int main() {
    int n,p,v;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&p,&v);
        ins(p,v);
    }
    dis();
     
    return 0;
}
