#include<stdio.h>
#include<stdlib.h>
typedef struct India {
	char sName[20];
	int population;
	float buget;
	int literacy;

	struct India *next;
}India;
India *head =NULL;
India* createNode(){
	India  *newNode=(India*)malloc(sizeof(India));
	getchar();
	printf("Enter the state Name:\n");
	char ch;
	int i=0;
	while((ch=getchar()) !='\n') {
		(*newNode).sName[i]=ch;
		i++;
	}

	printf("Enter the Population No:\n");
	scanf("%d",&newNode->population);
	
	printf("Enter the state Buget:\n");
	scanf("%f",&newNode->buget);

	printf("Enter the literacy No:\n");
	scanf("%d",&newNode->literacy);

	newNode->next=NULL;
	return newNode;
}
void addNode() {
	India *newNode = createNode();

	if(head ==NULL){
		head=newNode;
	}else {
		India *temp=head;
		while(temp->next != NULL) {
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
int  printLL() {
	if(head ==NULL){
		printf("Empty Linked List");
		return -1;
	}else {
		India *temp =head;
		while(temp !=NULL) {
			printf("|%s|",temp->sName);
			printf("|%d|",temp->population);
			printf("|%f|",temp->buget);
			printf("|%d|",temp->literacy);
			if(temp->next !=NULL)
				printf("->");
			temp=temp->next;
		}
		printf("\n");
	}
}
void main () {
	int nodeCount;
	printf("Enter Node Count :\n");
	scanf("%d",&nodeCount);
	for(int i=1;i<=nodeCount;i++){
		addNode();
	}
	printLL();
}

