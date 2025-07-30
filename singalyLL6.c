#include<stdio.h>
#include<stdlib.h>
typedef struct Demo {
	int data;
	struct Demo *next;
}Demo;
Demo *head=NULL;
Demo* createNode() {
	Demo *newNode=(Demo*)malloc(sizeof(Demo));
	printf("Enter the Data :\n");
	scanf("%d",&newNode->data);
	return newNode;
}
int addNode() {
	Demo *newNode=createNode();
	Demo *temp=head;
	if(head==NULL){
		head=newNode;
	}else {
		while(temp->next !=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->next=NULL;
	}
}
int minInt () {
	if(head==NULL){
		printf("Linked list is Empty\n");

		return -1;
	}else{
	int min=head->data;
	Demo *temp=head;
        while(temp !=NULL){
		if(temp->data< min){
			min=temp->data;

		}
		temp=temp->next;
	}
	printf("Minimum integer from the linked list is:%d\n",min);
}
}
	
void printLL() {
	if(head ==NULL ){
		printf("There is no data to print\n");
	}else{
		Demo *temp=head;
		while(temp !=NULL){
			printf("|%d|",temp->data);
		if(temp->next !=NULL) {
			printf("->");
		}
		temp=temp->next;
		}
	}
	printf("\n");
}
void main () {
	int nodeCount;
	printf("Enter the node Count :\n");
	scanf("%d",&nodeCount);
	for(int i=1;i<=nodeCount;i++) {
		addNode();
	}
	printLL();
	minInt();
}
