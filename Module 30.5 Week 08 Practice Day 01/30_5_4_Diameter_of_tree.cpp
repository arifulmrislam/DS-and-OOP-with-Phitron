/*
1. Node passed in recursive function is null then return zero.
2. Find the height of the left subtree.
3. Find the height of the right subtree.
4. Using recursive call, calculate the diameter of left-subtree until node become zero.
5. Using recursive call, calculate the diameter of right-subtree until node become zero.
6. If the root node is include than,
        Diameter - left-subtree + right-subtree +1;
7. If the root node is not include than,
        Diameter = max(diameter of left-subtree, diameter of right subtree)
8. The final output will return from the max of step 6 and step 7.
*/