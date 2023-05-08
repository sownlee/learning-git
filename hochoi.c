#include <std.h>

struct my_struct {
    int my_member;
};

struct my_struct *my_ptr = malloc(sizeof(struct my_struct));
my_ptr->my_member = 42;
