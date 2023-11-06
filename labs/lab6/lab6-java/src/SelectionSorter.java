import java.util.ArrayList;

/**
 * The BubbleSorter class provides a method to sort an array list of generic Items
 * using the selection sort algorithm.
 */

public class SelectionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    /**
     * Sorts an array list of Items using selection sort.
     *
     * @param arr the array list of Items to be sorted
     */
    public void sort(ArrayList<Item<E>> arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            // Find the minimum element in the unsorted part of the array
            int min_idx = i;
            for (int j = i + 1; j < n; j++) {
                E current = arr.get(j).getItem();
                E min = arr.get(min_idx).getItem();

                // Compare current element with the minimum found so far
                if (current.compareTo(min) < 0) {
                    min_idx = j;
                }
            }

            // Swap the found minimum element with the first element
            Item<E> temp = arr.get(min_idx);
            arr.set(min_idx, arr.get(i));
            arr.set(i, temp);
        }
    }
}
