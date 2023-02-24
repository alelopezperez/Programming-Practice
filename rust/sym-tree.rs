use std::{cell::RefCell, rc::Rc};

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

fn main() {}

pub fn helper(left: &Option<Rc<RefCell<TreeNode>>>, right: &Option<Rc<RefCell<TreeNode>>>) -> bool {
    match (left, right) {
        (Some(l), Some(r)) => {
            if l.borrow().val == r.borrow().val {
                println!("sad");
                helper(&l.borrow().left, &r.borrow().right)
                    && helper(&l.borrow().right, &r.borrow().left)
            } else {
                false
            }
        }
        (None, None) => true,
        _ => false,
    }
}
pub fn is_symmetric(root: Option<Rc<RefCell<TreeNode>>>) -> bool {
    let r = root.unwrap();
    let ans = helper(&r.borrow().left, &r.borrow().right);
    ans
}

