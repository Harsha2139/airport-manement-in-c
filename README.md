# ✈️ Gate Allocation Tree - Airport Management System

## 📌 Project Title

Gate Allocation Tree using Binary Search Tree (BST)

---

## 👥 Team Members

* Member 1: Thugu Harsha Vardhan Reddy
* Member 2: Boodati Jayanth

---

## ❗ Problem Statement

Managing flight gate allocation manually is inefficient and error-prone. This project aims to develop a system that efficiently:

* Adds flight and gate details
* Updates gate assignments
* Searches flight information
* Deletes flight records
* Displays all allocated flights

---

## 🌳 Data Structure Used

**Binary Search Tree (BST)**

### Why BST?

* Efficient searching, insertion, and deletion
* Maintains sorted order of flights
* Reduces time complexity

---

## ⚙️ Algorithm Explanation

### 1. Insert (Create)

* If tree is empty → create node
* If flight number < root → go left
* If flight number > root → go right

### 2. Delete

* Case 1: No child → delete node
* Case 2: One child → replace node
* Case 3: Two children → replace with inorder successor

### 3. Update

* Search node by flight number
* Modify gate number

### 4. Search

* Compare flight number
* Traverse left or right accordingly

### 5. Display

* Use inorder traversal
* Displays flights in sorted order

---

## 🛠️ Compilation Instructions

### Step 1: Save file

```bash
main.c
```

### Step 2: Compile

```bash
gcc main.c -o project
```

### Step 3: Run

#### On Linux/macOS:

```bash
./project
```

#### On Windows:

```bash
project.exe
```

> ⚠️ Note: Avoid spaces in file names (e.g., use `main.c` instead of `airport management.c`)

---

## 📊 Sample Output

### 1. Add Node

```
Enter Flight No and Gate No: 101 5
```

### 2. Delete Node

```
Enter Flight No to delete: 101
Flight deleted!
```

### 3. Update Node

```
Enter Flight No to update: 102
Enter New Gate No: 7
Gate updated successfully!
```

### 4. Search

```
Enter Flight No to search: 102
Flight Found! Gate No: 7
```

### 5. Display

```
Flight No: 101 | Gate No: 5
Flight No: 102 | Gate No: 7
```

### 6. Exit

```
Exiting...
```

---

## 🎥 Demo Video Link

👉 Add your video link here:
https://your-demo-video-link.com

---

## 🎯 Features

* CRUD Operations implemented
* Menu-driven program
* Uses dynamic memory allocation (`malloc`, `free`)
* Modular programming using functions

---

## 📌 Conclusion

This project demonstrates how a **Binary Search Tree (BST)** can efficiently manage airport gate allocations. It improves speed, reduces manual errors, and provides a scalable solution for real-world airport systems.

---
