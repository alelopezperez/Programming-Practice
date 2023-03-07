// Definition for a binary tree node.
#[derive(Debug, PartialEq, Eq)]
pub struct TreeNode {
    pub val: i32,
    pub left: Option<Rc<RefCell<TreeNode>>>,
    pub right: Option<Rc<RefCell<TreeNode>>>,
}

impl TreeNode {
    #[inline]
    pub fn new(val: i32) -> Self {
        TreeNode {
            val,
            left: None,
            right: None,
        }
    }
}
use std::cell::RefCell;
use std::cmp;
use std::rc::Rc;

fn main() {}
impl Solution {
    pub fn counter(root: &Option<Rc<RefCell<TreeNode>>>, mut curr: i32) -> i32 {
        match root {
            Some(r) => {
                curr = cmp::max(
                    Self::counter(&r.borrow().left, curr + 1),
                    Self::counter(&r.borrow().right, curr + 1),
                );

                curr
            }
            None => curr - 1,
        }
    }
    pub fn is_balanced(root: Option<Rc<RefCell<TreeNode>>>) -> bool {
        match root {
            Some(r) => {
                let curr = 1;
                let ri = Self::counter(&r.borrow().left, curr + 1);
                let l = Self::counter(&r.borrow().right, curr + 1);
                if (ri - l).abs() > 1 {
                    false
                } else {
                    Self::is_balanced(r.borrow().left.clone())
                        && Self::is_balanced(r.borrow().right.clone())
                }
            }
            None => true,
        }
    }
}
