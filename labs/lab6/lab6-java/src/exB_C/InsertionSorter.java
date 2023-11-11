package exB_C;
import java.util.ArrayList;

/**
 * The InsertionSorter class provides a method to sort an ArrayList of generic Items
 * using the insertion sort algorithm. It implements the Sorter interface to provide
 * this sorting strategy.
 *
 * @param <E> the type of the elements in the items, extending both Number and Comparable
 */
public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E> {

    /**
     * Sorts an ArrayList of Items in ascending order using the insertion sort algorithm.
     * This method iterates over the elements, and for each, it finds the correct position
     * in the already sorted part of the list, placing it there.
     *
     * @param arr The ArrayList of Items to be sorted
     */
    @Override
    public void sort(ArrayList<Item<E>> arr) {
        for (int i = 1; i < arr.size(); i++) {
            Item<E> currentItem = arr.get(i);
            int j = i - 1;

            // Move elements greater than currentItem one position ahead of their current position
            while (j >= 0 && arr.get(j).getItem().compareTo(currentItem.getItem()) > 0) {
                arr.set(j + 1, arr.get(j));
                j--;
            }
            arr.set(j + 1, currentItem);
        }
    }
}
