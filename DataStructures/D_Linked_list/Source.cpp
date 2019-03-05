#include<iostream>
using namespace std;
struct node
{
	int x;
	node* next;
	node* prev;

};

void insertatend(node** head, int i)
{
	node* temp1;
	node* temp;
	temp1 = *head;
	temp = new node();
	temp->x = i;
	temp->next = NULL;
	temp->prev = NULL;
	if (temp1 == NULL)
		*head = temp;
	else
	{
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp->prev = temp1;
		temp1->next = temp;
	}
	
}

void display(node* head)
{
	node* temp = NULL;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->x;
		temp = temp->next;
	}
}
void Rdisplay(node* head)
{
	node* temp = NULL;
	node* temp1 = NULL;
	temp = head;
	while (temp != NULL)
	{	
		temp1 = temp;
		temp = temp->next;
	}
	while (temp1!= NULL)
	{
		cout << temp1->x;
		temp1 = temp1->prev;
	}
}


void insert_begin(node** head, int i)
{
	node* temp = NULL;
	//node* temp1 = NULL;
	temp = new node();
	temp->x = i;
	temp->next = NULL;
	temp->prev = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		(*head)->prev = temp;
		temp->next = *head;
		*head = temp;

	}

}
void insert_after(node** head, int i, int j)
{
	node* temp = NULL;
	node* temp1 = NULL;
	temp1 = *head;
	temp = new node();
	temp->x = j;
	temp->next = NULL;
	temp->prev = NULL;
	while (temp1->x != i)
		temp1 = temp1->next;
	temp->next = temp1->next;
	temp->prev = temp1;
	temp1->next->prev = temp;
	temp1->next = temp;


}

int main()
{
	node* head = NULL;
	insertatend(&head, 1);
	insertatend(&head, 2);
	insertatend(&head, 3);
	insertatend(&head, 4);
	insertatend(&head, 5);
	display(head);
	cout << "\n";
	//Rdisplay(head);
	//insert_begin(&head, 0);
	//insert_after(&head, 3, 8);
	display(head);
	system("pause");
	return 0;
}