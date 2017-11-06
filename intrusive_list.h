#ifndef INTRUSIVE_LIST_H
# define INTRUSIVE_LIST_H

struct list
{
  struct list *next;
  struct list *prev;
};

struct list *list_init(void);

struct list *list_add_front(struct list *l, struct list *e);

#endif
