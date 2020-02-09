#ifndef FT_LISTSIZE_H
# define FT_LISTSIZE_H

typedef struct s_list
{
		struct	s_list *next;
		void	*data;
}				t_list;
