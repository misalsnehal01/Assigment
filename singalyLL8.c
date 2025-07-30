#include<stdio.h>
#include<stdlib.h>
 typedef struct Student {
	 int rollNo;
	 char Course[10];
	 float pct;
	 
	 struct Student *next;
 }Stud;
Stud *head=NULL;
Stud* createNode () {
	Stud *newNode =(Stud*)malloc(sizeof(Stud));
	printf("Enter the Roll NO :\n");
	scanf("%d",&newNode->rollNo);
	getchar();
	printf("Enter the Course Name :\n");
	char ch;
	int i=0;
	while((ch=getchar()) !='\n') {
		newNode->Course[i]=ch;
		i++;
	}
	printf("Enter the Percentage:\n");
	scanf("%f",&newNode->pct);
	newNode->next=NULL;
	return newNode;
}
void addNode() {
	Stud *newNode =createNode();
	
	if(head ==NULL ){
		head=newNode;
	}else {
		Stud *temp=head;
		while(temp->next !=NULL ){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void printLL() {
	if(head==NULL){
		printf("Linked List is Empty");
	}else {
	Stud *temp=head;
		while(temp != NULL) {
			printf("|%d|",temp->rollNo);
			printf("|%s|",temp->Course);
			printf("|%f|",temp->pct);
			if(temp->next !=NULL ){
				printf("->");
			}
				temp=temp->next;
		}
		printf("\n");
	}
}
void main () {
	int nodeCount;
	printf("Enter the node Count :\n");
	scanf("%d",&nodeCount);
	for(int i=1;i<=nodeCount;i++) {
		addNode();

	}
	printLL();
}

