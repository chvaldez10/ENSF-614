import java.util.ArrayList;
import java.util.Arrays;

public class MyVector<E extends Number & Comparable<E>>{
    private ArrayList<Item<E>> storageM;
    private Sorter<E> sorter;

    public MyVector(int size) {
        storageM = new ArrayList<Item<E>>(size);
    }

    public MyVector(ArrayList<Item<E>> arrList) {
        storageM = new ArrayList<Item<E>>(arrList.size());
        for(Item<E> item : arrList) {
            storageM.add(item);
        }
    }

    public void add(Item item) {
        storageM.add(item);
    }

    public void setSortStrategy(Sorter<E> s) {
        sorter = s;
    }

    public void performSort() {
        sorter.sort(storageM);
    }

    public void display() {
        for (Item item : storageM) {
            System.out.print(item.getItem() + " ");
        }
        System.out.println();
    }
}
