# Ackermann Fork Bomb
---

## What It Does

The code defines and calls the **Ackermann function**, one of the most famous examples of a **computable but non-primitive recursive function**.  
It grows faster than almost any other standard mathematical function.

Then, in an infinite loop, it uses the return value of that function to decide **how many times to call `fork()`** — a system call that creates new processes.

```c
for (int j = 0; j < ackermann(k, i); j++) {
    fork();
}
