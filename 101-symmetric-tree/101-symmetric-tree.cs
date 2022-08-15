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
    
    
    
            bool IsSymmetriclr(TreeNode left, TreeNode right)
        {
            if(left== null && right ==null)
                return true;
                
            if(left == null && right != null || left != null && right == null || left != null && right != null && left.val != right.val)
            {
                return false;
            }
                return (IsSymmetriclr(left.right,right.left) &&                                                     IsSymmetriclr(left.left,right.right));
            
        }
    
    public bool IsSymmetric(TreeNode root) {
        
        if(root == null)
        {
            return true;
        }
    
            return (IsSymmetriclr(root.left,root.right));
        


        
    }
}