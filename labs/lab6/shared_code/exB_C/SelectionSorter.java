/**
 * SelectionSorter.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE B and C
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */

import java.util.ArrayList;

/**
 * The SelectionSorter class provides a method to sort an array list of generic Items
 * using the selection sort algorithm. It implements the Sorter interface to provide
 * this sorting strategy.
 *
 * @param <E> the type of the elements in the items, extending both Number and Comparable
 */
public class SelectionSorter<E extends Number & Comparable<E>> implements Sorter<E> {

    /**
     * Sorts an array list of Items using the selection sort algorithm.
     * This method iterates over the array list, finds the minimum element from the unsorted
     * part, and places it at the beginning. The process is repeated until the whole array is sorted.
     *
     * @param arr the array list of Items to be sorted
     */
    public void sort(ArrayList<Item<E>> arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            // Find the minimum element in the unsorted part of the array
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                E current = arr.get(j).getItem();
                E min = arr.get(minIdx).getItem();

                // Compare current element with the minimum found so far
                if (current.compareTo(min) < 0) {
                    minIdx = j;
                }
            }

            // Swap the found minimum element with the first element
            Item<E> temp = arr.get(minIdx);
            arr.set(minIdx, arr.get(i));
            arr.set(i, temp);
        }
    }
}
