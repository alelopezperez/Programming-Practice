// Definition for singly-linked list.
#[derive(PartialEq, Eq, Clone, Debug)]
pub struct ListNode {
    pub val: i32,
    pub next: Option<Box<ListNode>>,
}
pub struct Solution;
impl ListNode {
    #[inline]
    fn new(val: i32) -> Self {
        ListNode { next: None, val }
    }
}
impl Solution {
    pub fn merge_two_lists(
        mut list1: Option<Box<ListNode>>,
        mut list2: Option<Box<ListNode>>,
    ) -> Option<Box<ListNode>> {
        let mut head = Some(Box::new(ListNode::new(-1)));

        let mut res = head.as_mut().unwrap();

        while list1 != None && list2 != None {
            let v1 = list1.as_ref().unwrap().val;
            let v2 = list2.as_ref().unwrap().val;

            if v1 > v2 {
                res.next = Some(Box::new(ListNode::new(v2)));
                list2 = list2.unwrap().next;
            } else {
                res.next = Some(Box::new(ListNode::new(v1)));
                list1 = list1.unwrap().next;
            }

            res = res.next.as_mut().unwrap();
        }

        if list1 != None {
            res.next = list1;
        }
        if list2 != None {
            res.next = list2;
        }
        head.unwrap().next
    }
}

fn main() {}
