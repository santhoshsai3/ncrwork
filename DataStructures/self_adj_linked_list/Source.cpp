#include<iostream>
using namespace std;

struct node
{
	int x;
	node* next;
};

void insertatend(node** head, int i)
{
	node* temp1 = NULL;
	node *temp = NULL;
	temp = new node();
	temp->x = i;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		temp1 = *head;
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = temp;
	}
}
void insert_begin(node** head, int i)
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

int main()
{
	int i ;
	node* head = NULL;
	node* temp = NULL;
	node* temp1 = NULL;
	insertatend(&head, 1);
	insertatend(&head, 2);
	insertatend(&head, 3);
	insertatend(&head, 4);
	insertatend(&head, 5);
	display(head);
	cout << "enter the element";
	cin >> i;
	while (temp != NULL)
	{
		temp1 = temp->next;
		if (temp1->x == i)
		{
			
			temp->next = temp1->next;
		}
	}

	insert_begin(&head, i);
	cout << endl;
	display(head);

	system("pause");
	return 0;
}