#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

map<char, int> freq;
int ans = 0;

struct Node {
	char val;
	struct Node *left, *right;
};

Node* newNode(char key)
{
	Node* temp = new Node;
	temp->val = key;
	temp->left = temp->right = NULL;
	return (temp);
}

int checkPalin()
{
	int oddCount = 0;
	for (auto x : freq) {
		if (x.second % 2 == 1)
			oddCount++;
	}
	return oddCount <= 1;
}

void cntpalin(Node* root)
{
	if (root == NULL)
		return;
	freq[root->val]++;

	if (root->left == NULL && root->right == NULL) {

		if (checkPalin() == true)
			ans++;
	}
	cntpalin(root->left);
	cntpalin(root->right);
	freq[root->val]--;
}

// Driver Code
int main()
{
	Node* root = newNode('2');
	root->left = newNode('a');
	root->left->right = newNode('a');
	root->left->left = newNode('2');
	root->left->right->right = newNode('2');
	root->right = newNode('3');

	// Function Call
	cntpalin(root);

	cout << ans << endl;
	return 0;
}
