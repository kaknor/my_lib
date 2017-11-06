#include "intrusive_list.h"

struct list *list_init(void)
{
  struct list *l = malloc(sizeof (struct list));
  l->next = NULL;
  l->prev = NULL;
  return l;
}

struct list *list_add_front(struct list *l, struct list *e)
{
  l->next = e;
  e->prev = l;
  e->next = NULL;
  return l;
}
