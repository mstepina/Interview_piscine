#ifndef HEADER_H
# define HEADER_H

/*--------------------------------
  !! required
  --------------------------------*/
# define CS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 !?:;,.$&<>()+*-_="

#include <stdio.h>
#include <stdlib.h>

struct s_node {
	char c;
	struct s_node *prev;
	struct s_node *next;
};

/*--------------------------------
  :) function you must implement
  --------------------------------*/
char *precious(int *text, int size);

/*--------------------------------
  ?? test function used in main
  --------------------------------*/


/*--------------------------------
  &  your own other function
  --------------------------------*/


#endif
