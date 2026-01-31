#include <vector>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void allPaths(TreeNode* root, vector<int>& arr, int count) {
        if (root == nullptr) return;
        if (root->left == nullptr && root->right == nullptr) {
            arr.push_back(count + root->val);
            return;
        } else {
            allPaths(root->left, arr, count + root->val);
            allPaths(root->right, arr, count + root->val);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> sums;
        allPaths(root, sums, 0);

        for (int i = 0; i < sums.size(); i++) {
            if (sums[i] == targetSum) return true;
        }

        return false;
    }
};