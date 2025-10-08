# Implementation-of-Sorting-in-CPP
Aim: To study and implementation of sorting in C++


# Program a: Bubble sort using pointer
Theory with explanation of the code:

- Bubble Sort compares adjacent elements and swaps them if they’re out of order.
- Using pointers, we traverse the array by incrementing pointer addresses instead of indices.
- The outer loop controls the number of passes; the inner loop compares *ptr and *(ptr+1).
- Swapping is done via dereferencing: *a, *b.
- Pointer arithmetic replaces array indexing, enhancing low-level control.
- Sorting is in-place with space complexity O(1).
- Time complexity remains O(n^2) for worst and average cases.
- Pointer-based implementation is efficient for embedded systems or memory-constrained environments.

Algorithm:

- Start 
- Repeat the sorting process for (n - 1) passes, where n is the array size.
- In each pass, set a second pointer to the element next to the current one.
- Compare the values pointed to by the two pointers.
- If the first value is greater than the second, swap them using a temporary variable.
- Move both pointers one step forward.
- Continue comparing and swapping until the end of the unsorted portion.
- After each pass, reduce the range of comparison by one.
- Repeat steps 3 to 8 until all elements are sorted.
- End


# Program b:  Insertion sort

Theory with explanation of the code:
- Insertion Sort builds the final sorted array one element at a time.
- It assumes the first element is already sorted.
- Each new element (key) is compared with the sorted portion to find its correct position.
- Larger elements are shifted right to make space for the key.
- Sorting is done in-place with space complexity O(1).
- Time complexity is O(n^2) in worst and average cases.
- Best case (already sorted array) is O(n).
- It is stable and preserves the relative order of equal elements.
- Efficient for small or nearly sorted datasets.
- Easy to implement and understand.

Algorithm:

- Start 
- Store the current element as the key.
- Compare the key with elements before it.
- Shift all larger elements one position to the right.
- Insert the key at its correct position.
- Repeat steps 2–5 for all elements.
- End 

# Program c: Bubble sort

Theory with explanation of the code:
- Bubble Sort compares adjacent elements and swaps them if they are out of order.
- It performs multiple passes until the array is sorted.
- Using pointers, we access and swap elements via memory addresses.
- The swap() function uses dereferencing to exchange values.
- The outer loop tracks the number of passes completed.
- The inner loop compares array[i] and array[i+1] using pointer references.
- After each pass, the largest unsorted element bubbles to its correct position.
- Sorting is done in-place with space complexity O(1).
- Time complexity is O(n^2) in worst and average cases.
- It is simple, stable, and ideal for learning pointer manipulation.


Algorithm:

- Start
- Input the number of elements and store them in an array.
- Initialize a counter to track completed passes.
- Repeat the sorting process until all passes are done.
- In each pass, compare adjacent elements using pointers.
- If the first element is greater than the second, swap them.
- Continue comparisons till the end of the unsorted portion.
- Increment the pass counter.
- Repeat steps 4–7 until the array is sorted.
- Display the sorted array.
- End 

# Conclusion
The three sorting implementations—Bubble Sort with pointers, Bubble Sort with arrays, and Insertion Sort—demonstrate foundational techniques in algorithm design and memory manipulation.
Bubble Sort using pointers emphasizes low-level control and reinforces pointer arithmetic, while the array-based version offers clarity and simplicity for beginners.
Insertion Sort, on the other hand, showcases efficient element placement and is ideal for nearly sorted data. All three are in-place and stable, making them memory-efficient and predictable.
Though not optimal for large datasets, they are excellent for learning core sorting logic, control flow, and data movement. Together, they build strong intuition for algorithmic thinking.

