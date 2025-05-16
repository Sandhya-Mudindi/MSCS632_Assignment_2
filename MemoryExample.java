import java.util.ArrayList;

public class MemoryExample {
    public static void main(String[] args) {
        ArrayList<Integer> data = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            data.add(i);
        }
        printData(data);
        // Memory is handled by garbage collector
    }

    static void printData(ArrayList<Integer> data) {
        for (int val : data) {
            System.out.println(val);
        }
    }
}
