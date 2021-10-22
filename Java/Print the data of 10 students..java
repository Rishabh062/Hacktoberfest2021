package Practical_6;
public class Student_Task5 {
    int size = 10;
    int count1 , count2 = 0;
    private String name , address;
    private int age;

    public Student_Task5(){
        this.name="Unknown";
        this.address="Not Available";
        this.age=0;
    }
    public void setInfo(String [] name , int[] age){
        System.out.println("STUDENTS");
        System.out.println("No | Name  | Age");
        for(int i=0; i<size;i++){
            count1++;
            System.out.println(count1+"\t"+name[i]+"\t"+age[i]); }
    }
    public void setInfo(String name[] , int age[] , String address[]) {
        System.out.println("STUDENTS");
        System.out.println("No | Name  | Age  |  Address");
        for(int i=0; i<size;i++){
            count2++;
            System.out.println(count2+"\t"+name[i]+"\t"+age[i]+"\t\t"+address[i]);} }
}
class UseStudentClass{
    public static void main(String[] args) {
        Student_Task5 std = new Student_Task5();
        int [] age = {18,19,18,20,17,19,20,18,19,20};
        String [] name = {"Areesha" , "Isha"  , "Ubaid"  , "Jawad"  , "Mahnoor"  , "Asad"  , "Sana"  , "Umair"  , "Raheel"  , "Romena"};
        String [] address = {"Muet Jamshoro","Muet Jamshoro","Muet Jamshoro","Muet Jamshoro","Muet Jamshoro","Muet Jamshoro","Muet Jamshoro","Muet Jamshoro","Muet Jamshoro","Muet Jamshoro"};
        std.setInfo(name,age);
        System.out.println();
        std.setInfo(name,age , address);
    }
}
