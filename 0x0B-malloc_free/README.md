# Memory Allocation
Memory allocation in C Programming is an important concept and must be properly understood to avoid memory leaks, wastage and segmentation faults.

- Static Memory Allocation (SMA)
- Dynamic Memory Allocation (DMA)

Static memory is allocated at compile time, cannot be reused and is only freed after the program ends. Whereas, Dynamic memory is allocated at run time, can be reused and freed at different points during run time. 

Dynamic memory is one of the used cases of pointers.

- malloc
- calloc
- realloc
- free

Dynamic memory is always allocated through the heap, while static memory is allocatedthrough the stack.
