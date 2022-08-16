public class linkedList {

    Node header;

    static class Node {
        int data;
        Node next = null;

        public Node() {

        }

        public Node(int d) {
            data = d;
        }
    }

    linkedList() {
        header = new Node();
    }

    void append(int d) {
        Node end = new Node();
        end.data = d;
        Node n = header;
        while (n.next != null) {
            n = n.next;
        }
        n.next = end;
    }
}


