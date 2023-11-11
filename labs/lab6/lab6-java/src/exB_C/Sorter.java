package exB_C;

import java.util.ArrayList;

/**
 * Defines the sorting behavior for objects of type {@link Item}.
 * This interface is part of the strategy pattern and allows for different sorting
 * implementations for a collection of {@link Item} objects.
 *
 * @param <E> the type of the elements in the items, extending both Number and Comparable
 */
public interface Sorter<E extends Number & Comparable<E>> {

    /**
     * Sorts the provided ArrayList of {@link Item} objects.
     *
     * @param arr the ArrayList of {@link Item} objects to be sorted
     */
    void sort(ArrayList<Item<E>> arr);
}
