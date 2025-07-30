#include<stdio.h>
#include<stdlib.h>
typedef struct Mall {
	char mName[20];
	int mNo;
	float rev;

	struct Mall *next;
}Mall;
Mall *head =NULL;
Mall* createNode(){
	Mall  *newNode=(Mall*)malloc(sizeof(Mall));
	getchar();
	printf("Enter the Mall Name:\n");
	char ch;
	int i=0;
	while((ch=getchar()) !='\n') {
		(*newNode).mName[i]=ch;
		i++;
	}

	printf("Enter the Mall No:\n");
	scanf("%d",&newNode->mNo);
	
	printf("Enter the Mall Rev:\n");
	scanf("%f",&newNode->rev);

	newNode->next=NULL;
	return newNode;
}
void addNode() {
	Mall *newNode = createNode();

	if(head ==NULL){
		head=newNode;
	}else {
		Mall *temp=head;
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
		Mall *temp=head;
		while(temp !=NULL) {
			printf("|%s|",temp->mName);
			printf("|%d|",temp->mNo);
			printf("|%f|",temp->rev);
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

