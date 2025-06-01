#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

typedef struct s_info
{
	char	**array_num_str;
	int		*array_num;
	int		size;
	t_stack	*a;
	t_stack	*b;
}	t_info;

// parsing & input
int		parc(int ac, char **av);
int		hnd_max_min(char *s);
int		vld_number(char *s);
char	**split_all(char **av);
t_info	info_fill(char **av);
void	free_info(t_info *i);
int		*convert_to_int_array(char **str_array);
long	ft_atol(const char *str);
int		check_dup(int *array, int size);

// stack building & freeing
void	free_stack(t_stack **stack);
void	fill_stack(t_stack **a, int *array, int size);
void	append_stack(t_stack **stack, int data);
t_stack	*new_node(int data);
void	free_split(char **arr);

// stack operations
void	sa(t_stack **a, int print);
void	sb(t_stack **b, int print);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a, int print);
void	rb(t_stack **b, int print);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a, int print);
void	rrb(t_stack **b, int print);
void	rrr(t_stack **a, t_stack **b);

// sorting
void	sort_two(t_stack **a);
void	sort_three_a(t_stack **a);
int		get_min_value(t_stack *a);
void	sort_five_a(t_stack **a, t_stack **b);

// quick sort utilities
int		get_stack_size(t_stack *a);
void	stack_to_array(t_stack *a, int *arr);
void	replace_with_index(t_stack *a, int *arr, int size);
void	index_stack(t_stack **a);
void	sort_arr(int *arr, int size);
int		check_small_cases_a(t_stack **a, int size);
int		split_stack(t_stack **a, t_stack **b, int size, int pivot);
void	quick_sort_simulation(t_stack **a, t_stack **b, int size);
void	restore_stack(t_stack **a, t_stack **b, int count);
int	get_pivot_from_stack(t_stack *a, int size);

// debugging / print
void	print_stack(t_stack *stack);
void	sort_three_b(t_stack **b);
int	check_small_cases_b(t_stack **b, int size);
void	sort_five_b(t_stack **a, t_stack **b);
void bring_top(t_stack **stack, int value, int is_stack_b);
int	get_max_value(t_stack *b);
void	partition_stack(t_stack **a, t_stack **b, int pivot, int size, int *pushed, int *rotated);
void	restore_b_to_a(t_stack **a, t_stack **b);
void	quick_sort_simulation(t_stack **a, t_stack **b, int size);
#endif