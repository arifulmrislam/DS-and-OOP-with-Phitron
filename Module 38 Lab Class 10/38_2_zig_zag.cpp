// void zigzagTraversal(treeNode *root)
// {
//     stack<treeNode *> currentLevel;
//     stack<treeNode *> nextLevel;

//     bool lefttoRight = true;

//     currentLevel.push(root);

//     while (!currentLevel.empty())
//     {
//         treeNode *x = currentLevel.top();
//         currentLevel.pop();

//         cout << x->data << " ";

//         if (lefttoRight)
//         {
//             if (x->leftChild)
//             {
//                 nextLevel.push(x->leftChild);
//             }
//             if (x->rightChild)
//             {
//                 nextLevel.push(x->rightChild);
//             }
//         }

//         else
//         {
//             if (x->rightChild)
//             {
//                 nextLevel.push(x->rightChild);
//             }
//             if (x->leftChild)
//             {
//                 nextLevel.push(x->leftChild);
//             }

//             if (currentLevel.empty())
//             {
//                 lefttoRight = !lefttoRight;
//                 swap(currentLevel, nextLevel);
//             }
//         }
//     }