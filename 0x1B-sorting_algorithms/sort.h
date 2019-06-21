#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

void swap(int *a, int *b);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap_ll(listint_t *left, listint_t *right, listint_t **list);
void qs(int arr[], int low, int high, size_t size);
int partition(int arr[], int low, int high, size_t size);

void ms(int *array, int *inner, int start, int end);
void merge(int *array, int *inner, int start, int mid, int end);

void heapify(int arr[], int n, int i, size_t size);

int find_max(int *array, size_t size);
void rds(int *arr, int size, int sd);

void qs_hoare(int *arr, int low, int high, size_t size);
int partition_hoare(int *arr, int low, int high, size_t size);

#endif /* SORT_H */
