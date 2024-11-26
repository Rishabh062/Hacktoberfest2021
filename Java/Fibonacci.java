class Fibonacci{
    public static void main(String args[]){
        //to print first 10 fibonacci number
        //first no=0
        //next no=1
        //After this all fibonacci numbers are a sum of previous two numbers
        //0,1,1,2,3,5,8....this will be our required series
        int a=0;
        int b=1;
        int n=8;
        for(int i=1;i<n;i++){
        System.out.println(b);
        int next=a+b;
        a=b;
        b=next;
    }
}
}
