
// ----------------------------------Implementation of Queue Data Structure using Array------------------------------------------

public class queue {
    
  static class Queue{         //----queue class----
        
    static int arr[];         // when we implement a queue using an array then its size is fixed as the size of the array is fixed
    int n;                    // n is size of array 
    static int rear=-1;       // rear is the end of queue, when queue is empty rear is -1
    
        Queue(int size){       // the constructor of queue class which take size from the user as a parameter
            arr=new int[size];
            this.n = size;
        }
    
   
        //---------The method which tells whether the queue is empty or not----------
        public boolean isEmpty() {
            return rear == -1;
        }
    
    
        //---------The method used to add element in the queue---------------
        public void add(int data) {
            if(rear==n-1){
                System.out.println("full queue");
                return;
            }
            rear++;
            arr[rear]= data;
        }
    
    
        //---------The method used to remove the front element from the queue---------------
        public int remove() {
            if (isEmpty()) {
                System.out.println("empty queue");
                return -1;
            }
            int front = arr[0];
            for (int i = 0; i < rear; i++) {
                arr[i]= arr[i+1];
            }
            rear--;
            return front;
        }

    
    
        //---------The method used to get front element of the queue---------------
        public int peek() {
            if (isEmpty()) {
                System.out.println("empty queue");
                return -1;
            }
            return arr[0];
        }

    }
  

  public static void main(String[] args) {   // main function
    Queue q = new Queue(7);                  // object of queue is created having size 7
    q.add(1);                                // add element in queue
    q.add(2);
    q.add(3);
    q.add(4);
    q.add(5);
    q.add(6);
    q.add(7);
    
    while (!q.isEmpty()) {                   // checking queue is empty or not
        System.out.println(q.peek());        // when queue is not empty print its front element
        q.remove();                          // then remove its front element 
    }
   } 
}
