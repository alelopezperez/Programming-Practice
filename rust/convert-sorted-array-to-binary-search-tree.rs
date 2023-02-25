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
use std::rc::Rc;
use std::cell::RefCell;
impl Solution {
    pub fn helper(nums: &Vec<i32>, left: usize, right: usize) ->  Option<Rc<RefCell<TreeNode>>> {
        if left<=right && left >= 0 && right<nums.len() {
            let mid = (right+left)/2;
            println!("{right} {left} {mid}");
            Some(Rc::new(RefCell::new(
                TreeNode{
                    val:nums[mid],
                    left:Self::helper(nums,left,mid-1),
                    right:Self::helper(nums,mid+1,right),
                }
                )))
        }
        else{
            None
        }
    }
    pub fn sorted_array_to_bst(nums: Vec<i32>) -> Option<Rc<RefCell<TreeNode>>> {
        Self::helper(&nums,0,nums.len()-1)
    }
}
