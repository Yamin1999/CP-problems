/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public IList<int> InorderTraversal(TreeNode root) {
        
        Stack<TreeNode> stk = new Stack<TreeNode>();
        List<int> inorder = new List<int>();
        
        TreeNode node = root;
        
        while(true)
        {
            if(node != null)
            {
                stk.Push(node);
                node = node.left;
            }
            else
            {
                if(stk.Count == 0)
                {
                    break;
                }
                node = stk.Peek();
                stk.Pop();
                inorder.Add(node.val);
                node = node.right;
            }
        }
        
        return inorder;
    }
}