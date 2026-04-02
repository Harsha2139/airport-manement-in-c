#include <stdio.h>
#include <stdlib.h>

// Structure
struct Node {
    int flightNo;
    int gateNo;
    struct Node *left, *right;
};

// Create Node
struct Node* createNode(int flightNo, int gateNo) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->flightNo = flightNo;
    newNode->gateNo = gateNo;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert
struct Node* insert(struct Node* root, int flightNo, int gateNo) {
    if (root == NULL)
        return createNode(flightNo, gateNo);

    if (flightNo < root->flightNo)
        root->left = insert(root->left, flightNo, gateNo);
    else if (flightNo > root->flightNo)
        root->right = insert(root->right, flightNo, gateNo);
    else
        printf("⚠ Flight already exists!\n");

    return root;
}

// Search
struct Node* search(struct Node* root, int flightNo) {
    if (root == NULL || root->flightNo == flightNo)
        return root;

    if (flightNo < root->flightNo)
        return search(root->left, flightNo);
    else
        return search(root->right, flightNo);
}

// Update
void update(struct Node* root, int flightNo, int newGate) {
    struct Node* temp = search(root, flightNo);

    if (temp != NULL) {
        temp->gateNo = newGate;
        printf("✅ Gate updated successfully!\n");
    } else {
        printf("❌ Flight not found!\n");
    }
}

// Find Minimum
struct Node* findMin(struct Node* root) {
    if (root == NULL)
        return NULL;

    while (root->left != NULL)
        root = root->left;

    return root;
}

// Delete
struct Node* deleteNode(struct Node* root, int flightNo) {
    if (root == NULL) {
        printf("❌ Flight not found!\n");
        return root;
    }

    if (flightNo < root->flightNo)
        root->left = deleteNode(root->left, flightNo);
    else if (flightNo > root->flightNo)
        root->right = deleteNode(root->right, flightNo);
    else {
        // Node found
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            printf("🗑 Flight deleted!\n");
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            printf("🗑 Flight deleted!\n");
            return temp;
        }

        // Two children
        struct Node* temp = findMin(root->right);
        root->flightNo = temp->flightNo;
        root->gateNo = temp->gateNo;
        root->right = deleteNode(root->right, temp->flightNo);
    }

    return root;
}

// Display (Inorder)
void display(struct Node* root) {
    if (root != NULL) {
        display(root->left);
        printf("✈ Flight No: %d | Gate No: %d\n", root->flightNo, root->gateNo);
        display(root->right);
    }
}

// Free Memory
void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

// Main Function
int main() {
    struct Node* root = NULL;
    int choice, flightNo, gateNo;

    while (1) {
        printf("\n--- ✈ Gate Allocation System ---\n");
        printf("1. Add Flight\n");
        printf("2. Delete Flight\n");
        printf("3. Update Gate\n");
        printf("4. Search Flight\n");
        printf("5. Display Flights\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            exit(1);
        }

        switch (choice) {

            case 1:
                printf("Enter Flight No and Gate No: ");
                scanf("%d %d", &flightNo, &gateNo);
                root = insert(root, flightNo, gateNo);
                break;

            case 2:
                printf("Enter Flight No to delete: ");
                scanf("%d", &flightNo);
                root = deleteNode(root, flightNo);
                break;

            case 3:
                printf("Enter Flight No to update: ");
                scanf("%d", &flightNo);
                printf("Enter New Gate No: ");
                scanf("%d", &gateNo);
                update(root, flightNo, gateNo);
                break;

            case 4: {
                printf("Enter Flight No to search: ");
                scanf("%d", &flightNo);

                struct Node* result = search(root, flightNo);

                if (result != NULL)
                    printf("✅ Flight Found! Gate No: %d\n", result->gateNo);
                else
                    printf("❌ Flight not found!\n");
                break;
            }

            case 5:
                if (root == NULL)
                    printf("No flights available.\n");
                else {
                    printf("\n--- ✈ Flight List (Sorted) ---\n");
                    display(root);
                }
                break;

            case 6:
                printf("Exiting program...\n");
                freeTree(root);
                exit(0);

            default:
                printf("❌ Invalid choice! Try again.\n");
        }
    }
}