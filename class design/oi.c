#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"admin.h"
#include"books.h"
book *load_books_txt()
{
	FILE *fp = fopen("books.txt", "r");
	if (fp == NULL)
	{
		return NULL;
	}

	book *head = NULL;
	book *tail = NULL;
	char line[512];

	while (fgets(line, sizeof(line), fp) != NULL)
	{
		book *node = (book *)malloc(sizeof(book));
		if (node == NULL)
		{
			fclose(fp);
			return head;
		}
		node->next = NULL;

		int ok = sscanf(line, "%49[^|]|%13[^|]|%49[^|]|%49[^|]|%d|%d|%d|%49[^\n]",
						node->name,
						node->isbn,
						node->borrower,
						node->author,
						&node->category,
						&node->times,
						&node->publish_date,
						node->publisher);
		if (ok != 8)
		{
			free(node);
			continue;
		}

		if (head == NULL)
		{
			head = node;
			tail = node;
		}
		else
		{
			tail->next = node;
			tail = node;
		}
	}

	fclose(fp);
	return head;
}
int save_books_txt(book *head)
{
	FILE *fp = fopen("books.txt", "w");
	if (fp == NULL)
	{
		return 0;
	}

	while (head != NULL)
	{
		fprintf(fp, "%s|%s|%s|%s|%d|%d|%d|%s\n",
				head->name,
				head->isbn,
				head->borrower,
				head->author,
				head->category,
				head->times,
				head->publish_date,
				head->publisher);
		head = head->next;
	}

	fclose(fp);
	return 1;
}
user *load_users_txt()
{
	FILE *fp = fopen("users.txt", "r");
	if (fp == NULL)
	{
		return NULL;
	}

	user *head = NULL;
	user *tail = NULL;
	char line[256];

	while (fgets(line, sizeof(line), fp) != NULL)
	{
		user *node = (user *)malloc(sizeof(user));
		if (node == NULL)
		{
			fclose(fp);
			return head;
		}
		node->next = NULL;

		int ok = sscanf(line, "%d|%49[^|]|%49[^|]|%d",
						&node->usertype,
						node->username,
						node->password,
						&node->borrow_num);
		if (ok != 4)
		{
			free(node);
			continue;
		}

		if (head == NULL)
		{
			head = node;
			tail = node;
		}
		else
		{
			tail->next = node;
			tail = node;
		}
	}

	fclose(fp);
	return head;
}
int save_users_txt(user *head)
{
	FILE *fp = fopen("users.txt", "w");
	if (fp == NULL)
	{
		return 0;
	}

	while (head != NULL)
	{
		fprintf(fp, "%d|%s|%s|%d\n",
				head->usertype,
				head->username,
				head->password,
				head->borrow_num);
		head = head->next;
	}

	fclose(fp);
	return 1;
}
history *load_history_txt()
{
	FILE *fp = fopen("history.txt", "r");
	if (fp == NULL)
	{
		return NULL;
	}

	history *head = NULL;
	history *tail = NULL;
	char line[512];

	while (fgets(line, sizeof(line), fp) != NULL)
	{
		history *node = (history *)malloc(sizeof(history));
		if (node == NULL)
		{
			fclose(fp);
			return head;
		}
		node->next = NULL;

		int ok = sscanf(line, "%49[^|]|%49[^|]|%13[^|]|%d|%d|%d",
						node->username,
						node->bookname,
						node->isbn,
						&node->borrow_date,
						&node->return_date,
						&node->if_return);
		if (ok != 6)
		{
			free(node);
			continue;
		}

		if (head == NULL)
		{
			head = node;
			tail = node;
		}
		else
		{
			tail->next = node;
			tail = node;
		}
	}

	fclose(fp);
	return head;
}
int save_history_txt(history *head)
{
	FILE *fp = fopen("history.txt", "w");
	if (fp == NULL)
	{
		return 0;
	}

	while (head != NULL)
	{
		fprintf(fp, "%s|%s|%s|%d|%d|%d\n",
				head->username,
				head->bookname,
				head->isbn,
				head->borrow_date,
				head->return_date,
				head->if_return);
		head = head->next;
	}

	fclose(fp);
	return 1;
}
void free_books(book *head)
{
	while (head != NULL)
	{
		book *tmp = head;
		head = head->next;
		free(tmp);
	}
}

void free_users(user *head)
{
	while (head != NULL)
	{
		user *tmp = head;
		head = head->next;
		free(tmp);
	}
}

void free_history(history *head)
{
	while (head != NULL)
	{
		history *tmp = head;
		head = head->next;
		free(tmp);
	}
}