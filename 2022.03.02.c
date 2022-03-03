#include<stdio.h>
#include <stdlib.h>

typedef struct _Node {

	int value;
	struct _Node* next;

}Node;

Node* get_new_node(int val) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->value = val;
	new_node->next = NULL;

	return new_node;
}

void print_linked_list(Node* head) {
	int count = 0;
	while (1) {
		if (count == 0) {
			printf("head : %d\n", head->value);
			count++;
		}
		else {
			printf("Node[%d] = %d\n", count, head->value);
			count++;
		}
		if (head->next == NULL) {
			break;
		}
		head = head->next;
	}
}

void add_value(Node* head, int val) {
	Node* next_node = get_new_node(val);
	while (1) {
		if (head->next == NULL) {
			head->next = next_node;
			break;
		}
		head = head->next;
	}
}

void remove_all(Node* head) {
	while (1) {
		for (int i = 0; ; i++) {
			if (head->next == NULL) {
				head = NULL;
				break;
			}
			head = head->next;
		}
		if (head == NULL) {
			break;
		}
	}
}

void add_value_by_index(Node* head, int val, int n) {
	
	Node* next_node = (Node*)malloc(sizeof(Node));

	for (int i = 0; i < n; i++) {
		if (n == 1){
			next_node = head;
			head->value = val;
			head->next = next_node;
			break; // 무한반복 되는 이유를 모르겠음...
		}
		if (i == n - 1) {
			next_node = head->next;
			head->value = val;
			head->next = next_node;
			break;
		}
		head = head->next;
	}
}

int main(void) {

	Node* head = get_new_node(10);
	add_value(head, 20);
	add_value(head, 30);
	add_value(head, 40);
	
	add_value_by_index(head, 25, 3);
	add_value_by_index(head, 0, 1);


	print_linked_list(head);

	


	return 0;
}