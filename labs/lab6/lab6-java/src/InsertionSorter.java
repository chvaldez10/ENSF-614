import java.util.ArrayList;

/**
 * This class provides a static method to sort an array of integers using
 * the insertion sort algorithm.
 */
public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    /**
     * Sorts an ArrayList of Items in ascending order using insertion sort.
     *
     * @param arr The ArrayList of Items to be sorted.
     */
    @Override
    public void sort(ArrayList<Item<E>> arr) {
        for (int i = 1; i < arr.size(); i++) {
            Item<E> currentItem = arr.get(i);
            int j = i - 1;

            // Use Item.getItem() to compare the values within the Items
            while (j >= 0 && arr.get(j).getItem().compareTo(currentItem.getItem()) > 0) {
                arr.set(j + 1, arr.get(j));
                j--;
            }
            arr.set(j + 1, currentItem);
        }
    }
}
