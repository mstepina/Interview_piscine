/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precious.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:59:04 by rita             #+#    #+#             */
/*   Updated: 2020/02/25 16:59:04 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void print(struct s_node *lst)
{
	struct s_node *start = lst;
	do
	{
		printf("%c", lst->c);
		lst = lst->next;
	} while (lst != start);
	printf("\n");
}


struct s_node *create_list(void)
{
    struct s_node *head;
    struct s_node *back;
    struct s_node *curr;
    int i;

    back = malloc(sizeof(struct s_node));
    head = back;
    i = 0;
    back->c = CS[i];
    i++;    
    while(CS[i])
    {
        curr = malloc(sizeof(struct s_node));
        curr->c = CS[i];
        back->next = curr;
        curr->prev = back;
        back = curr;
        i++;
    } 
    head->prev = back;
    back->next = head;
    return (head);
}

void solve(struct s_node **list, int n)
{
    if(n < 0)
    {
        while(n < 0)
        {
            *list = (*list)->prev;
            n++;
        }
    }
    else if(n > 0)
    {
        while(n > 0)
        {
            *list = (*list)->next;
            n--;
        }
    }

}

char *precious(int *text, int size)
{
    struct s_node *list;
    char *res;
    int i;

    list = create_list();
    //print(list);
    res = malloc(sizeof(char) * (size + 1));
    i = 0;
    while(i < size)
    {
        solve(&list, text[i]);
        res[i] = list->c;
        i++;
    }
    res[i] = '\0';
    return(res); 
}