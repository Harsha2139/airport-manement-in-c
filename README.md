
# ✈️ Airport Management System using Binary Search Tree (BST)

---

## 📌 Project Title

Airport Management System using Binary Search Tree

---

## 👥 Team Members


* Member 1 Name Thugu Harshavardhan reddy-CDS/2025/2139
* Member 2 Name Boodati Jayanth-CDS/2025/1814

---
## 📌 Introduction

In modern airports, managing flight records efficiently is a critical task. Airports handle a large number of flights daily, requiring fast operations such as adding new flights, searching records, updating statuses, and displaying sorted data.

Traditional methods like manual record keeping or unsorted data structures can be slow and inefficient, especially when the dataset grows large. To solve this problem, our project implements a Binary Search Tree (BST) to manage flight records efficiently.

This system demonstrates how data structures can be applied to real-world problems like airport management.
## ❓ Problem Statement
---

Managing flight records in an airport efficiently is a crucial task. The system must support operations such as adding new flights, searching for existing flights, updating flight status, deleting flight records, and displaying all flights in sorted order.

Traditional methods may be slow and inefficient when handling large datasets. Therefore, an efficient data structure is required to optimize these operations.

---

## 🌳 Data Structure Used

**Binary Search Tree (BST)**

A Binary Search Tree is used to store flight records based on Flight ID.

It allows efficient insertion, deletion, searching, and sorting of data.

Why BST?

Fast searching

Automatic sorting

Efficient insertion and deletion
---
## 4. Features of Our System

“Our system provides the following functionalities:

Insert new flight records

Search for existing flights

Update gate allocation

Delete flight records

Display all flights in sorted order

This makes the system efficient and easy to use.”
---
## ⚙️ Algorithm Explanation

### 1. Insertion

* Compare the Flight ID with the root node
* If smaller → insert into left subtree
* If larger → insert into right subtree

---

### 2. Searching

* Start from root
* Compare Flight ID
* Traverse left or right accordingly
* Stop when the node is found or NULL

---

### 3. Deletion

* Case 1: Node has no children → delete directly
* Case 2: Node has one child → replace with child
* Case 3: Node has two children → replace with inorder successor

---

### 4. Traversal (Display)

* Use **Inorder Traversal (Left → Root → Right)**
* Displays flights in sorted order

---

### 5. Update

* Search for the flight using Flight ID
* Modify the status field

---

### ✈️ Gate Allocation System – Complete Explanation

## Structure

# ✅ Definition

Structure is a user-defined data type used

 to group related data.

struct Node {

    int flightNo;

    int gateNo;

    struct Node *left, *right;

};

# 👉 Why used?

Store multiple values (flight + gate)

 together

Represent tree node

 👉 Count: 1 structure (Node)

### 🔹 2. Functions

## ✅ What are Functions?

Functions are blocks of code used to

 perform specific tasks. They improve

 modularity, readability, and reusability.

## ✅ Functions Used in Program

Function	Purpose

createNode()	Create new node

insert()	Add flight (BST insertion)

search()	Find flight

update()	Modify gate number

findMin()	Find smallest node

deleteNode()	Remove node

display()	Show all flights

👉 Why used?

Avoid code repetition

Make program organized

Easy to debug

count: 7 user-defined functions




### 🔹 3. Pointers

✅ Definition

Pointers store address of variables.

struct Node *left, *right;

## 👉 Used in:

Linking nodes

Dynamic memory (malloc)

Tree traversal

## 👉 Why used?

To create dynamic data structure

Efficient memory usage

 👉 Count:

Multiple pointers (root, left, right,

 temp)
 Loops

## ✅ Types Used

### 4..while loop

while(1)

Infinite loop for menu

Recursion (acts like loop)

Used in:

insert

search

delete

display

👉 Why used?

Repeat operations

Traverse tree

👉 Count:

1 while loop

Multiple recursive calls




### 🔹 5. Variables

## ✅ Types Used

Type	Example

Integer	flightNo, gateNo, choice

Pointer	*root, *temp

## 👉 Why used?

Store input values

Control program flow

👉 Count: Multiple (approx 6–10 variables)



### 🔹 6. switch-case

## ✅ Purpose

Used for menu-driven selection

👉 Cases:

1 → Insert

2 → Delete

3 → Update

4 → Search

5 → Display

6 → Exit

## 👉 Why used?

Better than multiple if-else

Easy to understand

👉 Count: 6 cases + 1 default



### 🔹 7. Binary Search Tree (BST)

✅ Definition

A tree where:

👉 Left < Root < Right



## ✅ Why BST is Used?

✔ Fast searching

✔ Sorted data automatically

✔ Efficient insert & delete




### ✅ Operations in BST

Operation	Function

Insert	insert()

Search	search()

Delete	deleteNode()

Traverse	display()



### ✅ Time Complexity

Operation	Complexity

Insert	O(log n)

Search	O(log n)

Delete	O(log n)

Display	O(n)
----
### 🟦 8. Output Explanation

“In our program:

We can add flight records

for a specific flight

Update gate allocation

Delete records

Display flights in sorted order”


## 💻 Compilation Instructions

1. Save the file as `airport.c`
2. Open terminal or command prompt
3. Compile the program:

   ```
   gcc airport.c -o airport
   ```
4. Run the program:

   ```
   ./airport
   ```

   (For Windows: `airport.exe`)

---


## 🎯 Conclusion

This project demonstrates how a **Binary Search Tree (BST)** can be effectively used to manage airport flight records. The system supports essential operations such as insertion, deletion, searching, updating, and displaying flight data in a sorted manner.

Using BST improves efficiency compared to traditional methods, especially for searching and organizing data. Although BST may become unbalanced in worst cases, it is still a powerful and simple data structure for moderate-sized applications.

Overall, this project provides a clear understanding of how data structures can be applied in real-world systems like airport management.

---

## 🎥 Demo Video Link

(Add your video link here, e.g., Google Drive / YouTube)

---
### output


<img width="462" height="653" alt="Screenshot 2026-03-26 194127" src="https://github.com/user-attachments/assets/70fed26a-ee0b-4745-a9f1-14848d5d8bab" />

<img width="475" height="279" alt="Screenshot 2026-03-26 194136" src="https://github.com/user-attachments/assets/41c4707a-4eac-4d39-90b8-f75b00fecc46" />

<img width="461" height="224" alt="Screenshot 2026-03-26 194148" src="https://github.com/user-attachments/assets/0b4d8e30-53c4-4f9d-bb00-71c8a17c86b5" />


<img width="358" height="161" alt="Screenshot 2026-03-26 194156" src="https://github.com/user-attachments/assets/f49652b4-e2f8-4b7d-9f47-1c47bf703592" />


<img width="487" height="261" alt="Screenshot 2026-03-26 194204" src="https://github.com/user-attachments/assets/49688ddd-9c35-4dbd-aede-a8d4a135a2a6" />


<img width="516" height="335" alt="Screenshot 2026-03-26 194218" src="https://github.com/user-attachments/assets/5bffcbb4-3ddc-42cc-ae68-60117bb979cb" />






