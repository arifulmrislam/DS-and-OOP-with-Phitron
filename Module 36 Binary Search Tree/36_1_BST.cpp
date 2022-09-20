/*character of binary search tree
1. Left Child < Parents
2. Right Child > Parents
3. No duplication in binary search tree

How to convert given array to binary search tree
11,5,9,43,34,1,2,7,21

sudo code:
1. 11 is the root of this binary search tree
2. 5 is less then 11, so it will go left side
3. 9 is less then 11 but bigger then 5, so it will go right side of 5.
4. 43 is bigger then 11 so it will go right side of 11.
5. 34 is bigger then 11 but less then 43 it will go left side of 43.
6. 1 is less then 11 and 5, it will go left side of 5.
7. 2 is less then 11 and 5 but bigger then 1 so it will go right side of 1.
8. 7 is less then 11 and bigger then 5 but less then 9, so it will sit left side of 9.
9. 21 is bigger then but less then 43 and 34,so it will sit left side of 21.
*/