public class Solution {
    public bool IsValid(string s) {
        
        Stack stk = new Stack();
        
        for(int i =0;i<s.Length;i++)
        {
            if(stk.Count ==0)
            {
                stk.Push(s[i]);
            }
            else
            {
            if(( s[i] == ')' && (char)stk.Peek() == '(' ) || ( s[i] == '}' && (char)stk.Peek()                   == '{' ) || ( s[i] == ']' && (char)stk.Peek() == '[' ))
               {
                   stk.Pop();
               }
                
                else
                {
                    stk.Push(s[i]);
                }
            }
        }
        
        if(stk.Count == 0)
        {
            return true;
        }
        else
            return false;
    }
}