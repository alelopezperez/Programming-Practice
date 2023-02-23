// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
// 
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }

struct Solution;
use std::rc::Rc;
use std::cell::RefCell;
impl Solution {
    pub fn is_same_tree(p: Option<Rc<RefCell<TreeNode>>>, q: Option<Rc<RefCell<TreeNode>>>) -> bool {

        match (p, q){
            (Some(p),Some(q))=>{
                if p.borrow().val == q.borrow().val{
                    Self::is_same_tree(p.borrow().left.clone(),q.borrow().left.clone()) && 
                    Self::is_same_tree(p.borrow().right.clone(),q.borrow().right.clone())
                    
                }
                else{
                    false
                }
            },
            (None,None)=> true,
            _ => false
        }        
    }
}
