#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(char* str, int length) {
    int left = 0;
    int right = length - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to construct a string from the subtree rooted at 'node'
void makeString(int node, int* end, int** children, int* childCount, char* C, char* result) {
    result[(*end)++] = C[node];
    for (int i = 0; i < childCount[node]; i++) {
        makeString(children[node][i], end, children, childCount, C, result);
    }
}

// Function to solve the problem
void SintSolve(int N, int** edges, char* C, int Q, int* queries) {
    // Allocate memory for children array and childCount array
    int** children = (int**)malloc(N * sizeof(int*));
    int* childCount = (int*)calloc(N, sizeof(int));
    for (int i = 0; i < N; i++) {
        children[i] = (int*)malloc(N * sizeof(int));
    }

    // Build the children array from the edges
    for (int i = 0; i < N - 1; i++) {
        int u = edges[i][0] - 1;
        int v = edges[i][1] - 1;
        children[u][childCount[u]++] = v;
    }

    // Process each query
    for (int i = 0; i < Q; i++) {
        int u = queries[i] - 1;
        char* result = (char*)malloc(N * sizeof(char));
        int end = 0;
        makeString(u, &end, children, childCount, C, result);

        if (isPalindrome(result, end)) {
            printf("1\n");
        } else {
            printf("0\n");
        }

        free(result);
    }

    // Free allocated memory
    for (int i = 0; i < N; i++) {
        free(children[i]);
    }
    free(children);
    free(childCount);
}

int main() {
    int N;
    scanf("%d", &N);

    // Allocate memory for edges array
    int** edges = (int**)malloc((N - 1) * sizeof(int*));
    for (int i = 0; i < N - 1; i++) {
        edges[i] = (int*)malloc(2 * sizeof(int));
    }

    // Read edges
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &edges[i][j]);
        }
    }

    // Read the string C
    char* C = (char*)malloc((N + 1) * sizeof(char)); // +1 for null terminator
    for (int i = 0; i < N; i++) {
        scanf(" %c", &C[i]);
    }

    int Q;
    scanf("%d", &Q);

    // Allocate memory for queries array
    int* queries = (int*)malloc(Q * sizeof(int));
    for (int i = 0; i < Q; i++) {
        scanf("%d", &queries[i]);
    }

    // Solve the problem
    SintSolve(N, edges, C, Q, queries);

    // Free allocated memory
    for (int i = 0; i < N - 1; i++) {
        free(edges[i]);
    }
    free(edges);
    free(C);
    free(queries);

    return 0;
}
