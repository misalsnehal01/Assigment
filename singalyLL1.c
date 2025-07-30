#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct India {
	char Festival[50];
	struct India *next;
}India;
India *head=NULL;
India *createNode() {
	India *newNode=(India*)malloc(sizeof(India));
	printf("Enter the Festival Name:\n");
	scanf("%s",newNode->Festival);
	newNode->next=NULL;
	return newNode;

}
void addNode () {
	India *newNode=createNode();
	if(head==NULL){
		head=newNode;
	}else{
		India *temp=head;
		while(temp->next !=NULL) {
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void printLL() {
	if(head ==NULL) {
		printf("No festival in the list.\n");
	}else {
		India *temp =head;
		printf("Festivals List:\n");
		while(temp !=NULL) {
			printf("|%s|",temp->Festival);
			if(temp->next !=NULL)
				printf("->");
			temp=temp->next;
		}
	}
	printf("\n");
}
void main () {
	int nodeCount;
	printf("Enter the node Count :\n");
	scanf("%d",&nodeCount);
	for(int i=1;i<=nodeCount;i++){
		addNode();
	}
	printLL();
}
