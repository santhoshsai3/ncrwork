#include<iostream>
using namespace std;

struct node
{
	int x;
	node* next;
};

void display(node* head)
{
	node* temp = NULL;
	temp = head;
	if (temp == NULL)
		;
	else
	{
		cout << temp->x;
		display(temp->next);
	}
}

void push(node** head, int i)
{
	node* temp = NULL;
	//node* temp1 = NULL;
	temp = new node();
	temp->x = i;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		temp->next = *head;
		*head = temp;

	}

}
int pop(node** head)
{
	int i = (*head)->x;
	node* temp = *head;
	*head = temp->next;
	return i;
}

int main()
{
	int i;
	node* head = NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);

	display(head);
	cout << "\n";
	i=pop(&head);
	cout << i;
	i=pop(&head);
	cout << i;
	i=pop(&head);
	cout << i;
	display(head);
	system("pause");
	return 0;


}