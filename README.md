*This activity has been created as part of the 42 curriculum by dshcherb, iyazykov*

# Push_swap

## Description 

The push_swap project is designed to provide a practical exploration of algorithmic complexity through the problem of sorting numbers under constraints—using only two stacks and a limited set of operations. Despite the simplicity of the sorting concept itself, the need to minimize the number of operations makes the choice of algorithm critically important. In the course of the work, it becomes clear that the effectiveness of the solution depends heavily on the input data, and a single algorithm can behave differently on random and nearly sorted sets.

---

## Instructions

Run `make` to build the program. Then execute `./push_swap`, optionally add a flag (`--simple`, `--medium`, or `--complex`) and enable benchmark mode with `--bench`. Finally, enter the numbers you want to sort.

---

## Example of use

```
shuf -i 0-9999 -n 500 > args.txt ; ./push_swap --bench $(cat args.txt) 2> bench.txt
```
```
ARG="4 56 0 1" ./push_swap --bench --adaptive $ARG 2> bench.txt
```
```
./push_swap --adaptive 23 0 1 89 4 9 -10
```
---

## Resources

The following sources were used as resources: man, stack overflow, geeksforgeeks, habr, systutorials, opengroup, manpages, github. AI was used to generate tests.

---

## Features

- Sorts a list of integers using two stacks under strict operation constraints
- Implements multiple sorting strategies depending on input size and complexity
- Minimizes the number of operations for optimal performance
- Handles input validation and duplicate detection
- Supports benchmark mode for performance analysis

## Strategy selection (flags)

The program allows selecting a specific sorting strategy using optional flags:

- --simple
Forces the use of an O(n²) algorithm (simple selection-based approach).
- --medium
Forces the use of an O(n√n) algorithm (chunk-based strategy).
- --complex
Forces the use of an O(n log n) algorithm (radix-based approach).
- --adaptive
Forces the use of an adaptive algorithm that selects the strategy dynamically based on the level of disorder in the input.
This is the default behavior if no flag is provided.

---

## Explanation and justification of the selected algorithms

### Simple - selection sort.

A strategy based on the principle of selection sort was chosen as a simple algorithm. In each iteration, the minimum element in stack A is identified, then moved to the front with the minimum number of rotations (ra or rra) and sent to stack B. After processing all elements, stack B is merged back into A, forming a sorted sequence.

This approach is well-suited for a basic implementation, as it is easy to understand and does not require complex logic or additional data structures. Despite its O(n²) time complexity, the algorithm ensures predictable behavior and allows for the efficient use of available operations, minimizing unnecessary rotations by selecting the direction.

Thus, this method is a convenient starting point for small or partially sorted datasets where simplicity of implementation takes priority over maximum performance.

This algorithm is based on the principle of selection sort and has been adapted to the constraints of the push_swap project. In each iteration, the stack A is searched for the minimum element, after which its position is determined to select the optimal rotation direction.

If the element is closer to the top of the stack, ra operations are used; otherwise, rra operations are used, which minimizes the number of operations required to move the element to the top. After that, the minimum element is sent to stack B using pb, and the process repeats until stack A is sorted.

In the final stage, all elements are returned from stack B to A using `pa`, forming the final sorted sequence. This approach is simple to implement, predictable in behavior, and well-suited for small datasets, despite its quadratic complexity.

---

### Medium - chunk sort.

To process medium and large datasets, a chunking strategy was chosen, which simplifies the sorting task by dividing the array into ranges of values. Instead of attempting to process all elements at once, stack A is sequentially divided into groups by value, and elements from the current range are moved to stack B. This reduces the number of random operations and makes the process more manageable.

This approach is inspired by ideas from radix sort and distribution algorithms: elements are grouped by ranges, which allows for faster retrieval of the desired values and reduces the total number of operations. Additionally, the element’s position is taken into account during the move, which helps optimize rotations and avoid unnecessary actions.

Thus, chunk sorting significantly reduces the number of operations compared to simple O(n²) algorithms and scales better on large input datasets, maintaining a balance between implementation complexity and efficiency.

This algorithm is based on dividing the input data into ranges (chunks), which simplifies the sorting process and reduces the number of operations. Stack A is processed in stages: at each iteration, elements whose index falls within the current range are selected and then moved to stack B. For each element, the optimal rotation direction (ra or rra) is selected based on its position, which minimizes the number of operations.

The batch size is determined dynamically based on the total number of elements, allowing the algorithm to adapt to different data volumes. Additionally, when transferring elements to stack B, partial reordering (via rb) is applied to simplify subsequent assembly.

In the second stage, the maximum elements are sequentially extracted from stack B and returned to stack A, selecting the least costly rotation direction. This approach significantly reduces the number of operations compared to simple algorithms and ensures good performance on medium and large datasets.

---

### Complex - radix sort.

Radix sort was chosen for processing large datasets because it achieves high efficiency while using a limited set of operations. Instead of directly comparing elements, the algorithm processes numbers digit by digit (bit by bit), sequentially distributing them between stacks A and B depending on the value of the current digit.

The main advantage of this approach is its linear complexity of O(n·k), where k is the number of bits, which makes it significantly more efficient than quadratic algorithms on large input data. Furthermore, radix sort adapts well to the limitations of `push_swap`, as it uses only basic operations (`pb`, `pa`, `ra`), avoiding complex calculations and unnecessary movements.

Thus, this algorithm ensures a stable and predictable number of operations, scales well, and is one of the most efficient solutions for sorting large datasets within the scope of this project.

This algorithm is based on Radix sort and uses bitwise processing of element indices to sort them. Instead of directly comparing values, elements are processed bit by bit, starting from the least significant bit. On each pass, stack A is split into two streams: elements whose current bit is 0 are moved to stack B, while the rest remain in A and are shifted using ra.

After processing all elements based on the current bit, stack B is fully merged back into stack A, preserving the intermediate order. The process is then repeated for the next bit until all significant digits of the maximum value have been processed.

This approach ensures a stable linear complexity of O(n·k), where k is the number of bits, and is well-suited for large input data within the constraints of push_swap, as it uses only basic stack operations and does not require comparisons between elements.

---
