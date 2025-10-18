import java.util.ArrayList;

public class ArrayListCloneExample {

    public static void main(String[] args) {
        ArrayList<String> originalList = new ArrayList<>();
        originalList.add("Element 1");
        originalList.add("Element 2");
        originalList.add("Element 3");

        ArrayList<String> clonedList = (ArrayList<String>) originalList.clone();

        System.out.println("Original List: " + originalList);
        System.out.println("Cloned List: " + clonedList);
    }
