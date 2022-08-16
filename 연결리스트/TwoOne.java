import java.util.HashSet;

public class TwoOne {

    static class linkedList {

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

        void deleteDups(Node n) { //연결리스트에서 중복되는 원소 제거
            HashSet set = new HashSet();
            Node previous = null;
            while (n != null) {
                if (set.contains(n.data)) {
                    previous.next = n.next;
                } else {
                    set.add(n.data);
                    previous = n;
                }
                n = n.next;
            }
        }

    }
}
