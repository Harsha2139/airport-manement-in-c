
# ✈️ Airport Management System using Binary Search Tree (BST)

---

## 📌 Project Title

Airport Management System using Binary Search Tree

---

## 👥 Team Members

* Your Name
* Member 2 Name
* Member 3 Name

---

## ❓ Problem Statement

Managing flight records in an airport efficiently is a crucial task. The system must support operations such as adding new flights, searching for existing flights, updating flight status, deleting flight records, and displaying all flights in sorted order.

Traditional methods may be slow and inefficient when handling large datasets. Therefore, an efficient data structure is required to optimize these operations.

---

## 🌳 Data Structure Used

**Binary Search Tree (BST)**

A Binary Search Tree is used to store flight records based on Flight ID.
It allows efficient insertion, deletion, searching, and sorting of data.

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






