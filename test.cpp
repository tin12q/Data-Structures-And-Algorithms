#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int x;
    string y;
    Node *next;
};
struct LinkedList
{
    Node *head;
    Node *tail;
};

void merge(int arr[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[middle + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    LinkedList *list = new LinkedList;
    list->head = NULL;
    list->tail = NULL;
    Node *node = new Node;
    node->x = 1;
    node->y = "hello";
    node->next = NULL;
    list->head = node;
    list->tail = node;
    Node *node2 = new Node;
    node2->x = 2;
    node2->y = "world";
    node2->next = NULL;
    list->tail->next = node2;
    list->tail = node2;
    Node *node3 = new Node;
    node3->x = 3;
    node3->y = "!";
    node3->next = NULL;
    list->tail->next = node3;
    list->tail = node3;
    Node *node4 = new Node;
    node4->x = 4;
    node4->y = "!";
    node4->next = NULL;
    list->tail->next = node4;
    list->tail = node4;
    Node *node5 = new Node;
    node5->x = 5;
    node5->y = "!";
    node5->next = NULL;
    list->tail->next = node5;
    list->tail = node5;
    Node *node6 = new Node;
    node6->x = 6;
    node6->y = "!";
    node6->next = NULL;
    list->tail->next = node6;
    list->tail = node6;
    Node *node7 = new Node;
    node7->x = 7;
    node7->y = "!";
    node7->next = NULL;
    list->tail->next = node7;
    list->tail = node7;
    Node *node8 = new Node;
    node8->x = 8;
    node8->y = "!";
    node8->next = NULL;
    list->tail->next = node8;
    list->tail = node8;
    Node *node9 = new Node;
    node9->x = 9;
    node9->y = "!";
    node9->next = NULL;
    list->tail->next = node9;
    list->tail = node9;
    Node *curr = list->head;
    while (curr != NULL)
    {
        cout << curr->x << " " << curr->y << endl;
        curr = curr->next;
    }
}
