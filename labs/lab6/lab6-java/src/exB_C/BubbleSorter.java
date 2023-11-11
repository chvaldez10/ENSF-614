package exB_C;
import java.util.ArrayList;

/**
 * The BubbleSorter class provides a method to sort an array list of generic Items
 * using the bubble sort algorithm. It implements the Sorter interface to provide
 * this sorting strategy.
 *
 * @param <E> the type of the elements in the items, extending both Number and Comparable
 */
public class BubbleSorter<E extends Number & Comparable<E>> implements Sorter<E> {

    /**
     * Sorts an array list of Items using the bubble sort algorithm. In each iteration,
     * adjacent items are compared and swapped if they are in the wrong order, thus
     * "bubbling" the highest or lowest value to the top of the list, depending on the
     * order of sorting.
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

                // Swap items if they are in the wrong order
                if (currentItem.getItem().compareTo(nextItem.getItem()) > 0) {
                    arr.set(j, nextItem);
                    arr.set(j + 1, currentItem);
                }
            }
        }
    }
}
