/*https://practice.geeksforgeeks.org/problems/
reverse-first-k-elements-of-queue/1*/


/*queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
        stack<int> s;
        queue<int>ans;
        
        for(int i=0;i<k;i++){
            s.push(q.front());
              q.pop();
        }
        
        while(!s.empty()){
     ans.push(s.top());
        s.pop();
        }
      
      
      while(!q.empty()){
          ans.push(q.front());
          q.pop();
      }
        
        return ans;
}*/