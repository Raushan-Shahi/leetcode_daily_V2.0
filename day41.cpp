
class Solution {
public:

unordered_map<TreeNode*,TreeNode*>mpp;

void Parent_Child(TreeNode* Child, TreeNode* Parent)
{
  if(Child == NULL) return;
  if(Parent == NULL) Parent = Child;
  else mpp[Child] = Parent;
  Parent_Child(Child->left, Child);
  Parent_Child(Child->right, Child);
}

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      
      Parent_Child(root, NULL); //as root has no parent so parent is NULL
      queue<TreeNode*>q;
      unordered_set<TreeNode*>visited; // to keep mark of visited nodes so that we dont consider it again
      vector<int>ans;
      
      q.push(target); //pushing target, so to explore nodes around target 
      visited.insert(target);
      int distance = 0;

      while(!q.empty())
      {
         int size = q.size();
         for(int i = 0; i < size; ++i)
         {
           auto temp = q.front(); //Current Node
           auto Left_Child = temp->left; //Left child
           auto Right_Child = temp->right; //Right Child
           q.pop();

           if(Left_Child != NULL && visited.count(Left_Child) == 0) 
           {
             q.push(Left_Child);
             visited.insert(Left_Child);
           }

           if(Right_Child != NULL && visited.count(Right_Child) == 0)
           {
             q.push(Right_Child);
             visited.insert(Right_Child);
           }

           if(mpp[temp] && visited.count(mpp[temp])==0)
           {
               q.push(mpp[temp]);
               visited.insert(mpp[temp]);
           }

           if(distance == k) ans.push_back(temp -> val);
         }
          distance++;
          if(distance > k) break; // if distace exceeds k, there's no need to go furthur
      } 
      return ans; 
    }
};