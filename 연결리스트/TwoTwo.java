import java.awt.*;

public class TwoTwo {

    static class linkedList{
        Node header;
        static class Node{
            int data;
            Node next=null;
            public Node(){

            }
            public Node(int d){
                data=d;
            }
        }
        linkedList(){
            header=new Node();
        }
        int printKthToLast(Node head, int k){  // 뒤에서부터 k번째 원소 값을 출력
            if(head==null){
                return 0;
            }
            int index=printKthToLast(head.next,k)+1;
            if(index==k){
                System.out.println(k+"th to last node is "+head.data);
            }
            return index;
        }
    }
    class Index{
        public int value=0;
    }
    linkedList.Node kthToLast(linkedList.Node head, int k){
        Index idx=new Index();
        return kthToLast(head,k,idx);
    }
    linkedList.Node kthToLast(linkedList.Node head, int k, Index idx){
        if(head==null){
            return null;
        }
        linkedList.Node node=kthToLast(head.next,k,idx);
        idx.value=idx.value+1;
        if(idx.value==k){
            return head;
        }
        return node;
    }




}
