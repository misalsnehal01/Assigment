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
int primeInt() {	
	Demo *temp=head;
	int isPrime,found=0;
	printf("Prime numbers in the list:");
	while(temp !=NULL ){
		isPrime=1;
	    if(temp->data <=1)
	      isPrime=0;
            else{
	   for(int i=2;i*i <=temp->data;i++){
              if(temp->data % i==0)
	      {
                isPrime=0;	      
                break;
	      }
	   }
    }
	    if(isPrime) {
		    printf("%d ",temp->data);
		    found=1;
	    }
	    temp=temp->next;
	}
	if( !found)
		printf("No prime numbers found.");
	printf("\n");
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
	primeInt();

}
