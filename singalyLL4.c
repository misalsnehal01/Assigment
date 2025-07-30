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
void addition(){
	int sum=0;
	Demo *temp=head;
	while(temp !=NULL ){
		sum += temp->data;
		temp=temp->next;
	}
	printf("This is the sum of all nodes: %d\n",sum);
}
void addLastAndFirst() {
	int sum;
	Demo *temp=head;
	while(temp->next != NULL ) {
		temp=temp->next;
		sum = head->data + temp->data;
	}
	printf("This is the sum of last & first  node: %d\n",sum);
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
	addition();
       	addLastAndFirst();
}
