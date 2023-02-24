    pub fn helper(root:  &Option<Rc<RefCell<TreeNode>>>, curr:i32, max: &mut i32) {
        match root{
            Some(r)=> {
                *max=cmp::max(curr,*max);
                Self::helper(&r.borrow().left,curr+1,max);
                Self::helper(&r.borrow().right,curr+1,max);

            }
            None => {}
        };

    }
    pub fn max_depth(root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
        let mut max = 1;

        match root{
            Some(r) =>{
                Self::helper(&r.borrow().left,2,&mut max);
                Self::helper(&r.borrow().right,2,&mut max);
                max
            },

            None => {
                0
            }
        }
                
    }
