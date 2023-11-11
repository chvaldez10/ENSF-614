package exB_C;
import java.util.ArrayList;

/**
 * Represents a generic vector that stores elements of type {@link Item}. It allows for sorting
 * the elements using different sorting strategies defined by the {@link Sorter} interface.
 *
 * @param <E> the type of the elements, extending both Number and Comparable
 */
public class MyVector<E extends Number & Comparable<E>>{
    private ArrayList<Item<E>> storageM;
    private Sorter<E> sorter;

    /**
     * Constructs a MyVector with an initial capacity.
     *
     * @param size the initial capacity of the vector
     */
    public MyVector(int size) {
        storageM = new ArrayList<>(size);
    }

    /**
     * Constructs a MyVector using elements from an existing ArrayList.
     *
     * @param arrList the ArrayList containing items to be added to the vector
     */
    public MyVector(ArrayList<Item<E>> arrList) {
        storageM = new ArrayList<>(arrList.size());
        for(Item<E> item : arrList) {
            storageM.add(item);
        }
    }
    /**
     * Adds an item to the vector.
     *
     * @param item the item to be added
     */
    public void add(Item<E> item) {
        storageM.add(item);
    }

    /**
     * Sets the sorting strategy for the vector.
     *
     * @param s the sorting strategy to be used
     */
    public void setSortStrategy(Sorter<E> s) {
        sorter = s;
    }

    /**
     * Sorts the vector according to the currently set sorting strategy.
     */
    public void performSort() {
        if (sorter != null) {
            sorter.sort(storageM);
        }
    }

    /**
     * Displays the elements of the vector.
     */
    public void display() {
        for (Item<E> item : storageM) {
            System.out.print(item.getItem() + " ");
        }
        System.out.println();
    }
}
