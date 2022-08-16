public class TwoThree {

    static class linkedList {
        TwoTwo.linkedList.Node header;

        static class Node {
            int data;
            linkedList.Node next = null;

            public Node() {

            }

            public Node(int d) {
                data = d;
            }
        }

        linkedList() {
            header = new TwoTwo.linkedList.Node();
        }

        boolean deleteNode(linkedList.Node n){
            if(n==null || n.next==null){
                return false;
            }
            linkedList.Node next=n.next;
            n.data=next.data;
            n.next=next.next;
            return true;

        }

    }
}
