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
    pub fn middle_node(head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
        let mut slow = head.as_ref();
        let mut fast = head.as_ref();

        while fast != None {
            fast = fast.unwrap().next.as_ref();
            if fast == None {
                break;
            }
            fast = fast.unwrap().next.as_ref();
            slow = slow.unwrap().next.as_ref();
        }
        Some(Box::new(*slow.unwrap().clone()))
    }
}

fn main() {}
