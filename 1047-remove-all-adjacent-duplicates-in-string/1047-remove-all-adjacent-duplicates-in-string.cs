public class Solution {
    public string RemoveDuplicates(string s) {
        
       
        Stack stk = new Stack();
        
        for(int i=0;i<s.Length;i++)
        {
            if(stk.Count == 0)
            {
                stk.Push(s[i]);
            }
            
            else
            {
                if(s[i] == (char)stk.Peek() ) 
                {
                    stk.Pop();
                }
                else
                {
                    stk.Push(s[i]);
                }
                    
            }
        }
        
        char[] new_arr = new char[stk.Count];
        
        for(int i=stk.Count-1; i>=0; i--)
        {
           new_arr[i] = (char)stk.Pop();
        }
        
        return new string(new_arr);
        
        
        
        
        
        
        
    }
}