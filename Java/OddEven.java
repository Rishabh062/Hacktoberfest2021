public class OddEven {
    public static void main(String args[]){
        int a[]={23,44,22,33,12,34,28,75};
        System.out.println("Odd Numbers:");
        for(int i=0;i<a.length;i++){
            if(a[i]%2!=0){
                System.out.println(a[i]);
            }
        }
        System.out.println("Even Numbers:");
        for(int i=0;i<a.length;i++){
            if(a[i]%2==0){
                System.out.println(a[i]);
            }
        }
    }
}
