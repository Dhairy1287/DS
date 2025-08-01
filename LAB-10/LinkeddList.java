public class LinkeddList{
    Node head;

    public void insert(int data){
        if(head == null){
            head = new Node(data);
            return;
        }
        Node current = head;
        while(current.link != null){
            current = current.link;
        }
        current.link = new Node(data);
        return;
    }

    public void printAll(){
        Node current = head;
        while(current != null){
            System.out.println(current.info+" ");
            current = current.link;
        }
        return;
    }
}