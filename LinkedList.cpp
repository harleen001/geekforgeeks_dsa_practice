//Array -> contugious memory, random access
//LL -> memory but not contigious

class Node{
    int data; //data
    Node next; //next node address
}

Node n1=new Node(10);
 //OR
Node n1=new Node();
n1.data=10;

Node n2=new Node();
n2.data=20;

n1.next=n2; // creates a linkage between n1 and n2


//While inserting element at starting lets say insert 5 at starting
Node addFirst(value)
{Node n1=new Node(value);
n1.next=head;//referenced
head=n1;//new head given
return head;
}

//while inserting at last

Node addLast(value)
{
    Node n1=new Node(value);
    Node temp=head;
    while(temp.next !=nullptr)
    {
        temp=temp.next;
    }
    temp.next=n1;
    return head;
}