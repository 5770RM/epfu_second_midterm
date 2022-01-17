# epfu_second_midterm

4. Design a structure NVec to hold n-dimensional vector. Use the best suited
data type for each piece of information. Design functions for initialization,
addition, subtraction, scalar multiplication, length, dot product.

5. A complex number is one that has real and imaginary parts: C = R + iI,
where i is an imaginary unit. Design a structure Complex to hold a complex
number. Use the best suited data type for each piece of information. Design
functions for initialization, addition, multiplication, division.
C 1 + C 2 = R 1 + R 2 + i ∗ (I 1 + I 2 )
C 1 ∗ C 2 = R 1 ∗ R 2 − I 1 ∗ I 2 + i ∗ (R 1 ∗ I 2 + R 2 ∗ I 1 )
1 +R 2 ∗I 2
1 −R 1 ∗I 2
= R 1 ∗I
+ i ∗ R 2 ∗I
R 2 2 +I 2 2
R 2 2 +I 2 2

6. Design a structure EPFUStud to store the personal information of an EPFU
student (name, id, sex, phone, test grades, final grade). Some tests are graded of
0 to 100 points (no fractions) and some are graded of 0 to 5 (fractions possible).
Use the best suited data type for each piece of information.
7. Write NVecCmp function that takes two structures NVec as parameters and
compares them. The function returns:
C 1
C 2
• -1 if the first structure is smaller than the second;
• 0 if both structures are equal;
• 1 if the first structure is greater than the second;
Comparison involves comparing lengths of the vectors;

8. Write ComplexCmp function that takes two structures Complex as parameters
and compares them. The function returns:
• -2 if the first complex number has smaller absolute value than the second;
• -1 if both complex numbers have equal absolute values, but firsts real value
is smaller than the second;
• 0 if both complex numbers have equal real and imaginary parts;
• 1 if both complex numbers have equal absolute values, but firsts real value
is greater than the second;
• 2 if the first complex number has greater absolute value than the second;

9. Write a function equalEntry that takes two EPFUStud variables as param-
eters and returns true if the entries contain identical data and false otherwise.

10. Write a function comesFirst that takes two EPFUStud variables as pa-
rameters and returns true if the name within the first entry comes before the
name of the second. In comparing names, function initially should compare last
names. If the last names are different, function should check dictionary order,
ignoring capitalization. If the last names are identical, then function should
compare the first names using dictionary order and ignoring capitalization.

11. Given the array of integers, sort it in ascending order

12.Given two, arrays of integers, concatenate them to obtain one, sorted
array

13. Write a function, that swaps i-th and j-th elements of the array of the
pointers

14. Write a function, that sorts the array of the pointers

15. Write a function, that compares two array of characters, and returns the
number of the differences

16. Write a function, that copies one array into the second

17. Assuming following declaration:
char * morse [26] = { " . - " , " -... " , " -. -. " ,
" -.. " , " . " , " .. -. " ,
" -.. " , " .... " , " .. " ,
3 " . - - - " , " -. - " , " . -.. " , " --" , " -. " ,
4
" ---" , " . - -. " , " . -. " , " ... " ,
5 " -" , " .. - " , " . - - " , " ... - " ,
6
" -.. - " , " -. - " , " - -.. " };

Write a function that takes as input the string of characters written in English,
and outputs the string written in Morse code

18. Given the array of pointers to character arrays.
char * lineptr [ LINES ];
Write the function that sorts it in alphabetical order;

19. Assume, that we have array of 100 NVec. Write procedure that stores the
array in a file named vector.txt. Create file, if it does not exist.

20. Assume, that we have array of 100 NVec. Write procedure that writes
in the file named vectorCmp.txt: each pair of vectors from the array, and the
result of their comparison. Create file, if it does not exist.

21. In the file vector.txt we have stored a number of vectors. Write the
function, that reads the file into the array of NVec, and the array of pointers to
NVec. Dynamic memory allocation is appreciated.

22. Assume, that we have array of 50 complex. Write procedure that stores
the array in a file named complex.txt. Create file, if it does not exist.

23. Assume, that we have array of 50 complex. Write procedure that writes
in the file named complexCmp.txt: each pair of complex from the array, and
the result of their comparison. Create file, if it does not exist.

24. Assume, that we have array of 50 complex. Write procedure that writes
in the file named complexOper.txt: each pair of complex from the array, and
the result of the sum, multiplication, division. Create file, if it does not exist.

25. In the file complex.txt we have stored a number of complex numbers.
Write the function, that reads the file into the array of complex, and the array
of pointers to complex. Dynamic memory allocation is appreciated.

26. Assume, that we have array of 42 EPFUStud. Write procedure that stores
the array in a file named students.txt. Create file, if it does not exist.

27. Assume, that we have array of 42 EPFUStud. Write procedure that writes
in the file named students.txt: each pair of students from the array, and the
result of their comparison. Create file, if it does not exist.

28. In the file students.txt we have stored a number of students. Write
the function, that reads the file into the array of EPFUStud, and the array of
pointers to EPFUStud. Dynamic memory allocation is appreciated.

29. Design a function, that counts a number of characters in the file.

30. Design a function, that counts a number of strings in the file.

31. Design a function, that counts a number of lines in the file.

32. Design a function, that counts average number of characters in each of
the line.

33. The first two numbers in the sequence are F 0 = 0 and F 1 = 1, and each
subsequent number is the sum of the previous two: F n = F n−1 + F n−2 . Design
two functions IterFun and RecFun that count n-th number of the sequence
in iterative IterFun and recursive RecFun manner. n is a parameter of each
function. Use of an array that stores intermediate results is not allowed.

34. The first two numbers in the sequence are F 0 = 2 and F 1 = 1, and each
subsequent number is the sum of the previous two: F n = F n−1 + F n−2 . Design
two functions IterFun and RecFun that count n-th number of the sequence
in iterative IterFun and recursive RecFun manner. n is a parameter of each
function. Use of an array that stores intermediate results is not allowed.

35. The first three numbers in the sequence are F 0 = 0, F 1 = 0, and F 2 = 1, and
each subsequent number is the sum of the previous three: F n = F n−1 + F n−2 +
F n−3 . Design two functions IterFun and RecFun that count n-th number of the
3sequence in iterative IterFun and recursive RecFun manner. n is a parameter
of each function. Use of an array that stores intermediate results is not allowed.
.
36. Given the structure and the head declaration:
struct list_el {
int val;
struct list_el * next;
};
struct list_el *head;
The structure is used to create a linked list. Write a recursive / iterative func-
tion, that counts a number of elements in the list.
37. Given the structure and the head declaration:
struct list_el {
int val;
struct list_el * next;
};
struct list_el *head;
The structure is used to create a linked list. Write a recursive / iterative func-
tion, that counts sum of elements in the list.
38. Given the structure and the head declaration:
struct list_el {
int val;
struct list_el * next;
};
struct list_el *head;
The structure is used to create a linked list. Write a recursive / iterative func-
tion, that removes an element from the list.
39. Given the structure and the head declaration:
struct list_el {
int val;
struct list_el * next;
};
struct list_el *head;
The structure is used to create a linked list. Write a recursive / iterative func-
tion, that adds an element:
• at the beginning of the list
• at the end of the list
• to the list keeping the ordering of the list (assuming that the list is always
ordered)
40. Given the structure and the head declaration:
struct list_el {
int val;
struct list_el * next;
};
struct list_el *head;
The structure is used to create a linked list. Write a recursive / iterative func-
tion, that searches for an element in the list, and returns the pointer to the
element or NULL when the element is not found.
41. Given the structure and the head declaration:
struct tree_el {
int val;
struct tree_el * right , * left;
};
typedef struct tree_el node;
node *root;
The structure is used to create binary tree. Write a function, that counts the
number of elements in the tree.
42. Given the structure and the head declaration:
struct tree_el {
int val;
struct tree_el * right , * left;
};
typedef struct tree_el node;
node *root;
The structure is used to create binary tree. Write a function, that counts sum
of elements in the tree.
43. Given the structure and the head declaration:
struct tree_el {
int val;
struct tree_el * right , * left;
};
typedef struct tree_el node;
node *root;
The structure is used to create binary tree. Write a function, that searches for
an element in the tree, and returns the pointer to the element or NULL when
the element is not found
