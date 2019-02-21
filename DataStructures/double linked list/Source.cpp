#include<iostream>
using namespace std;

struct node
{
	int pow;
	int co;
	node* next;
};

void insertatend(node** head, int i,int j)
{
	node* temp1 = NULL;
	node *temp = NULL;
	temp = new node();
	temp->co = i;
	temp->pow = j;
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

void display(node* head)
{
	node* temp = NULL;
	temp = head;
	if (temp == NULL)
		;
	else
	{
		cout << "+"<<head->co << "X^" << head->pow<<" ";
		display(temp->next);
	}
}
int main()
{
	int temp;
	node* l1=NULL;
	node* l2 = NULL;
	node* l3 = NULL;
	insertatend(&l1, 1, 2);
	insertatend(&l1, 1, 0);
	insertatend(&l2, 2, 1);
	display(l1);
	cout << endl;
	display(l2);
while (l1 != NULL&&l2 != NULL)
	{
		if (l1->pow > l2->pow)
		{
			insertatend(&l3, l1->co, l1->pow);
			l1 = l1->next;
		}
		else if (l1->pow < l2->pow)
		{
			insertatend(&l3, l2->co, l2->pow);
			l2 = l2->next;
		}
		else
		{
			temp = l1->co + l2->co;
			insertatend(&l3, temp, l1->pow);
			l1 = l1->next;
			l2 = l2->next;

		}
		
		

	}
	if (l1 == NULL)
	{
		while (l2 != NULL)
		{
			insertatend(&l3, l2->co, l2->pow);
			l2 = l2->next;
		}
	}
	else
	{
		while (l1 != NULL)
		{
			insertatend(&l3, l1->co, l1->pow);
			l1 = l1->next;
		}

	}
	cout << "\n";
	display(l3);
system("pause");
	return 0;
}