#ifndef HEADERH
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH_NAME 64
#define MAX_LENGTH_RECORD 3000
#define SEMICONLON ","
#define FOUND 1
#define NOT_FOUND 0

/*
 * The binary tree type, with a linked list for duplicate keys.
 */
typedef struct node
{
    char name[MAX_LENGTH_NAME];
    char data[MAX_LENGTH_RECORD];
    struct node *left;
    struct node *right;
}Node;

Node *makedict(char name[], char data[]);
Node *insert(Node *root, char name[], char data[]);
Node *construct_tree(char datafile[]);
int search(Node *root, char output_file[], char key[]);
int write_to_file(char data[], char file_name[]);
int output_data(char name[], char data[], int counter, char file_name[],
                int status);
int read_keys(Node *root, char output_file[]);

#endif
