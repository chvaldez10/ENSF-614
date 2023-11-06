import java.util.ArrayList;

/**
 * The BubbleSorter class provides a method to sort an array list of generic Items
 * using the bubble sort algorithm.
 */
public class BubbleSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    /**
     * Sorts an array list of Items using bubble sort.
     *
     * @param arr the array list of Items to be sorted
     */
    @Override
    public void sort(ArrayList<Item<E>> arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                Item<E> currentItem = arr.get(j);
                Item<E> nextItem = arr.get(j + 1);
                if (currentItem.getItem().compareTo(nextItem.getItem()) > 0) {
                    // swap items in the array list
                    arr.set(j, nextItem);
                    arr.set(j + 1, currentItem);
                }
            }
        }
    }
}