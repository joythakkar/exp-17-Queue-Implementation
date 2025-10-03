# exp-17-Queue-Implementation
# Queues


## Aim
To study and implement the **Queue data structure** in C++.

---

## Theory

A **Queue** follows the **FIFO (First In, First Out)** principle.  
- The element inserted **first** is the element that gets removed **first**.  
- Elements are inserted at the **back** and removed from the **front** of the queue.  

---

## Basic Operations

- **Enqueue (Insertion)** → New elements are inserted at the **back** of the queue using `push()`.  
- **Dequeue (Deletion)** → Elements are removed from the **front** using `pop()`.  
- **Accessing Elements** → The `front()` and `back()` functions allow access to the first and last elements.  
- **empty()** → Checks if the queue is empty (`true` if no elements, otherwise `false`).  
- **size()** → Returns the number of elements in the queue.  

---

## Algorithm (Example Flow)

### Initialization
1. Define a constant `SIZE = 5` for maximum queue size.  
2. Create a class `Queue` with:
   - An integer array `arr[SIZE]`.  
   - Two variables `front` and `rear`.  
3. In the constructor: set `front = -1` and `rear = -1` (empty queue).  

---

### Enqueue Operation (Insert Element)
1. Input a value to insert.  
2. If `rear == SIZE - 1` → Queue Overflow.  
3. If `front == -1` → set `front = 0` (first insertion).  
4. Increment `rear` and insert the value at `arr[rear]`.  

---

### Dequeue Operation (Remove Element)
1. If `front == -1` or `front > rear` → Queue Underflow.  
2. Print the element at `arr[front]`.  
3. Increment `front`.  

---

### Display Operation
1. If the queue is empty → print "Queue is empty".  
2. Otherwise, loop from `front` to `rear` and display all elements.  

---

### Example Execution
1. `enqueue(10), enqueue(20), enqueue(30)` → Queue: **10, 20, 30**  
2. `dequeue()` → Removes **10** → Queue: **20, 30**  
3. `enqueue(40)` → Queue: **20, 30, 40**  

---

## Conclusion
We learnt to implement and perform basic **queue operations** such as:
- Enqueue (insertion)  
- Dequeue (deletion)  
- Accessing front & rear elements  
- Checking size and emptiness  

Queues are widely used in **task scheduling, buffering, and process management**.
