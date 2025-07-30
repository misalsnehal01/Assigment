#include<stdio.h>
#include<stdlib.h>
typedef struct India {
	char Festival[30];

	struct India *next;
}India;
India *head =NULL;
India* createNode() {
	India *newNode =(India *)malloc(sizeof(India));
	printf("Enter the name of Festival:");
	scanf("%s",newNode->Festival);
	return newNode;
}
void addNode() {
	India *newNode=createNode();
	if(head==NULL){
		head=newNode;
	}else{
	India *temp=head;
	while(temp->next !=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	}
}
int Countnode() {
	int count=0;
	India *temp=head;
	while(temp !=NULL){
		count++;
		temp=temp->next;

}
printf("Count=%d\n",count);
}
void printLL() {
	if(head ==NULL){
		printf("No festivals in list to print");
	}else{
		India *temp=head;
		printf("Festivals in List:");
		while(temp !=NULL){
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
	printf("Enter the node Count:\n");
	scanf("%d",&nodeCount);
	for(int i=1;i<=nodeCount;i++){
		addNode();
	}
	printLL();
        Countnode();
}
