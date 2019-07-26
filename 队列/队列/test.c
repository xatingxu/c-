//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//typedef struct Node {
//	int val;
//	struct Node* next;
//}Node;
//typedef struct Queue {
//	Node* front;
//	Node* rear;
//}Queue;
//
//void QueueInit(Queue* q) {
//	assert(q);
//	q->front = q->rear = NULL;
//}
//void QueueDestory(Queue* q) {
//	assert(q);
//	Node* cur=q->front;
//	while (cur)
//	{
//		Node* next = cur->next;
//		free(cur);
//		cur = cur->next;
//	}
//	q->front = q->rear = NULL;
//}
//Node* BuyNode(int x)
//{
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->val = x;
//	node->next = NULL;
//	return node;
//
//}
//void QueuePush(Queue* q, int val) {
//	assert(q);
//	
//	if (q->front == NULL) {
//	
//		q->front = q->rear = BuyNode(val);
//	}
//	else {
//		q->rear->next = BuyNode(val);
//		q->rear = q->rear->next;
//	}
//	
//}
//void QueuePop(Queue* q) {
//	assert(q);
//	Node* next = q->front->next;
//		free(q->front);
//		q->front = next;
//		int val = q->front->val;
//		next = next->next;
//		if (q->front = NULL)
//		{
//			q->rear = NULL;
//		}
//	}
//	
//	
//
//int QueueFront(Queue* q) {
//	assert(q->front != NULL);
//	return q->front->val;
//}
//int Queuerear(Queue* q) {
//	assert(q->front != NULL);
//	return q->rear->val;
//}
//void QueueTraverse(Queue* q) {
//	Node* cur = q->front;
//	while (cur != q->rear) {
//		printf("%d ", cur->val);
//		
//		cur= cur->next;
//	}
//	printf("%d ", q->rear->val);
//}
//int sizeQueue(Queue* q) {
//	Node* cur = q->front;
//	int size = 0;
//	while (cur)
//	{
//		cur = cur->next;
//		size++;
//
//	}
//	return size;
//}
//int QueueEmpty(Queue* q) {
//	assert(q);
//	return q->front == NULL ? 0 : 1;
//}
//int main() {
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePop(&q);
//	QueueTraverse(&q); printf("\n");
//	/*while (QueueEmpty(&q))
//	{
//	   printf("front:%d ", QueueFront(&q));
//	   
//	}*/
//		
//	/*printf("%d ", QueueFront(&q)); printf("\n");
//	printf("%d ", Queuerear(&q)); printf("\n");
//	printf("%d ", sizeQueue(&q)); printf("\n");
//	isEmpty(&q);*/
//	system("pause"); printf("\n");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Node {
	int val;
	struct Node* next;
}Node;
typedef struct Queue {
	Node* front;
	Node* rear;
}Queue;
int length = 0;
void QueueInit(Queue* q) {
	q->front = q->rear = NULL;
}
void QueuePush(Queue* q, int val) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	if (q->front == NULL) {
		q->front = node;
	}
	else {
		q->rear->next = node;
	}
	q->rear = node;
	length++;
}
int QueuePop(Queue* q) {
	assert(q->front != NULL);
	Node* second = q->front->next;

	free(q->front);
	q->front = second;
	second = second->next;
	int val = q->front->val;
	if (q->front == NULL) {
		q->rear = NULL;
	}
	length--;
	return val;
}
int QueueFront(Queue* q) {
	assert(q->front != NULL);
	return q->front->val;
}
int Queuerear(Queue* q) {
	assert(q->front != NULL);
	return q->rear->val;
}
void QueueTraverse(Queue* q) {
	Node* cur = q->front;
	while (cur != q->rear) {
		printf("%d ", cur->val);

		cur = cur->next;
	}
	printf("%d ", q->rear->val);
}
int sizeQueue(Queue* q) {
	return length;
}
void isEmpty(Queue* q) {
	if (q->front != NULL) {
		printf("队列不为空");
	}
	else {
		printf("队列为空");
	}
}
int main() {
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePop(&q);
	QueueTraverse(&q); printf("\n");
	printf("%d ", QueueFront(&q)); printf("\n");
	printf("%d ", Queuerear(&q)); printf("\n");
	printf("%d ", sizeQueue(&q)); printf("\n");
	isEmpty(&q);
	system("pause"); printf("\n");
	return 0;
}
