import java.util.ArrayList;
import java.util.Arrays;

public class MyVector<E extends Number & Comparable<E>>{
    private ArrayList<Item<E>> storageM;
    private Sorter sorter;

    public MyVector(int size) {
        storageM = new ArrayList<>(size);
    }

    public MyVector(ArrayList<Item<E>> arrList) {
        storageM = new ArrayList<>(arrList);
    }
}
